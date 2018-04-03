/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 15:59:05 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 15:59:07 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LOGGER_HPP
# define __LOGGER_HPP

# include <ctime>
# include <string>
# include <fstream>
# include <iostream>

# define NUM       2 
# define SIZE      25

# define CALL_FUNC(obj, func) ((obj)->*(func))

class Logger {

private:
    std::string     _log_name;
    void            logToConsole(std::string input);
    void            logToFile(std::string input);
    std::string     makeLogEntry(std::string msg);

public:
    Logger(std::string name);
    ~Logger(void);
    void            log(std::string const & dest, std::string const & message);
};

typedef void(Logger::*loggers_func)(std::string input);

#endif /* __LOGGER_HPP */
