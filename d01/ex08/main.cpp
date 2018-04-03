/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 15:08:36 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 15:08:38 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int 	main(void) {

	Human 	robin;

	robin.action("punch", "batman");
	robin.action("shot", "batman");
	robin.action("roar", "batman");
	return (0);
}
