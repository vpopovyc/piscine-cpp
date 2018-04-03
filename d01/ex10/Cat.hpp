/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 18:14:37 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 18:14:46 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP
# define __CAT_HPP

# include <string>
# include <fstream>
# include <sstream>
# include <iostream>

class Cat {

private:
    std::ifstream       *_stream;
    void                _parser(std::istream& fd);
    void                _open_filestreams(int ac, char *av[]);
    void                _print_filestreams(int ac, char *av[]);

public:
    Cat(int ac, char *av[]);
    ~Cat(void);
};

#endif /* __CAT_HPP */
