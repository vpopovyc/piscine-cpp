/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Expr.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 14:10:37 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/19 14:10:39 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Expr.hpp"

Expr::Expr(void) {

}

Expr::~Expr(void) {

}

float           Expr::_prev_number(std::string & expr, size_t i) {

    char    num_flag = NO_NUMBER;
    size_t  pos = i;
    float   result = 0.0f;

    for (; i != 0; --i) {

        if (expr[i] == ' ') {

            if (num_flag == NO_NUMBER)
                continue ;
            else
                break ;
        }
        else if (isdigit(expr[i])) {

            num_flag = GOT_NUMBER;
        }
        else if(expr[i] == '.') {

            if (num_flag == GOT_NUMBER)
                continue ;
            else
                break ;         
        }
        else {

            ++i;
            break ;
        }
    }
    this->_insert_pos = i;
    result = atof((expr.c_str()) + i);
    expr.replace(i, pos - i, pos - i, SPACE);
    return (result);
}

float           Expr::_next_number(std::string & expr, size_t i) {

    char    num_flag = NO_NUMBER;
    size_t  pos = i;
    size_t  tmp_i = 0;
    float   result = 0.0f;

    for (; i < expr.size(); ++i) {

        if (expr[i] == SPACE) {

            if (num_flag == NO_NUMBER)
                continue ;
            else
                break ;
        }
        else if (std::isdigit(expr[i])) {

            if (num_flag == NO_NUMBER) {

                tmp_i = i;
                num_flag = GOT_NUMBER;
                continue ;
            }
        }
        else if(expr[i] == DOT) {

            if (num_flag == GOT_NUMBER)
                continue ;
            else
                break ;         
        }
        else
            break ;
    }
    result = atof((expr.c_str()) + tmp_i);
    expr.replace(pos, i - pos, i - pos, SPACE);
    return (result);
}

void                Expr::_multiply_fixed_point(std::string & expr, float prev, float next) {

    std::stringstream   ss;

    ss << (Fixed(prev) * Fixed(next));
    expr.insert(this->_insert_pos, ss.str());
}

void                Expr::_divide_fixed_point(std::string & expr, float prev, float next) {

    std::stringstream   ss;

    ss << (Fixed(prev) / Fixed(next));
    expr.insert(this->_insert_pos, ss.str());
}

void                Expr::_add_fixed_point(std::string & expr, float prev, float next) {

    std::stringstream   ss;

    ss << (Fixed(prev) + Fixed(next));
    expr.insert(this->_insert_pos, ss.str());
}

void                Expr::_substract_fixed_point(std::string & expr, float prev, float next) {

    std::stringstream   ss;

    ss << (Fixed(prev) - Fixed(next));
    expr.insert(this->_insert_pos, ss.str());
}

void                Expr::_multiply_division(std::string & expr) {

    for (size_t i = 0; i < expr.size(); ++i) {

        switch (expr[i]) {

            case '*': {

                expr[i] = ' ';
                _multiply_fixed_point(expr, _prev_number(expr, i), _next_number(expr, i));
                break ;
            }
            case '/': {
                
                expr[i] = ' ';
                _divide_fixed_point(expr, _prev_number(expr, i), _next_number(expr, i));
                break ;
            }
            default: {

            }
        }
    }
}

void                Expr::_addition_substraction(std::string & expr) {

    for (size_t i = 0; i < expr.size(); ++i) {

        switch (expr[i]) {

            case '+': {

                expr[i] = ' ';
                _add_fixed_point(expr, _prev_number(expr, i), _next_number(expr, i));
                break ;
            }
            case '-': {
                
                expr[i] = ' ';
                _substract_fixed_point(expr, _prev_number(expr, i), _next_number(expr, i));
                break ;
            }
            default: {

            }
        }   
    }
}

void                Expr::_evaluate_bracket(std::string & bracket) {

    bracket.erase(bracket.begin());
    bracket.erase(bracket.end() - 1); // end() is '\0'
    if (bracket.find_first_not_of(" ", 0) == std::string::npos){

        std::cout << "Empty bracket, undefined behaviour _" << std::endl;
        exit(1);
    }
    _multiply_division(bracket);
    _addition_substraction(bracket);
}

void                Expr::_brackets_addition(std::string &expr, size_t & opening_bracket, size_t & closing_bracket, size_t & i) {

    std::string     brackets;

    closing_bracket = i - opening_bracket + 1; // + 1 to get closing bracket
    brackets = expr.substr(opening_bracket, closing_bracket);
    _evaluate_bracket(brackets);
    expr.erase(opening_bracket, closing_bracket);
    expr.insert(opening_bracket, brackets);
    i = -1; // Not 0, bcz it will be icremented right after assigment
}

void                Expr::_brackets(std::string & expr) {

    char            bracket_flag = 0;
    size_t          opening_bracket = 0;
    size_t          closing_bracket = 0;

    for (size_t i = 0; i < expr.size(); ++i) {

        switch (expr[i]) {

            case '(' : {

                opening_bracket = i;
                bracket_flag |= OPEN_BRACKET;
                break ;
            }
            case ')' : {

                if (bracket_flag & OPEN_BRACKET) {
                    
                    _brackets_addition(expr, opening_bracket, closing_bracket, i);
                    bracket_flag ^= OPEN_BRACKET;
                }
                else {

                    std::cout << "Missing opening bracket :-(" << std::endl;
                    exit(2);
                break ;
                }
            }
        }
    }
    if (bracket_flag & OPEN_BRACKET) {

        std::cout << "Missing closing bracket :-( " << std::endl;
        exit(3);
    }
}

void             Expr::evaluate(std::string expr) {

    _brackets(expr);
    _multiply_division(expr);
    _addition_substraction(expr);
    std::cout << "Expr: " << expr << std::endl;
}

