/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Expr.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 14:10:45 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/19 14:10:46 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EXPR_HPP
# define __EXPR_HPP

# include <iostream>
# include <sstream>
# include <cctype>
# include "Fixed.hpp"

# define NO_NUMBER      0
# define GOT_NUMBER     1
# define SPACE          ' '
# define DOT            '.'
# define OPEN_BRACKET   1

class   Expr {

private:
    size_t              _insert_pos;
    // get left and rigth operand
    float               _prev_number(std::string & expr, size_t i);
    float               _next_number(std::string & expr, size_t i);
    // operations ft's
    void                _multiply_fixed_point(std::string & expr, float prev, float next);
    void                _divide_fixed_point(std::string & expr, float prev, float next);
    void                _add_fixed_point(std::string & expr, float prev, float next);
    void                _substract_fixed_point(std::string & expr, float prev, float next);
    // general ft's
    void                _multiply_division(std::string & expr);
    void                _addition_substraction(std::string & expr);
    void                _evaluate_bracket(std::string & bracket);
    void                _brackets_addition(std::string &expr, size_t & opening_bracket,
                                                              size_t & closing_bracket,
                                                              size_t & i);
    void                _brackets(std::string & expr);
public:
    Expr(void);
    ~Expr(void);
    void                evaluate(std::string expr);
};

#endif /* __EXPR_HPP */

/*
    okay, u may be want to improve that code:
        - increase Fixed value size to 64 bits 
*/
