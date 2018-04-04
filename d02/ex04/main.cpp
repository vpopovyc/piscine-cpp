/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 20:59:19 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 20:59:20 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Expr.hpp"
#include <iostream>

int     main(int ac, char **av) {

    Expr    expr;

    if (ac == 2) {

        expr.evaluate(av[1]);
    }
    else {

        std::cout << "Bad input  :(" << std::endl;
    }
    return 0;
}
