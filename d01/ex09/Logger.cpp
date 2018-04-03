/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 15:58:58 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 15:58:59 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string name) {

    std::ofstream   _log_file;

    _log_name = name;
    _log_file.open(_log_name, std::ios_base::trunc);
}

Logger::~Logger(void) {

}

void             Logger::logToConsole(std::string input) {

    std::cout << input << std::endl;
}

void             Logger::logToFile(std::string input) {

    std::ofstream   _log_file;

    _log_file.open(_log_name, std::ios_base::app);
    _log_file << input << std::endl;
    _log_file.close();
}

std::string     Logger::makeLogEntry(std::string msg) {

    std::time_t     time_var;
    std::string     time_stamp;
    char            time_buffer[SIZE];

    time_var = std::time(NULL);
    std::strftime(time_buffer, sizeof(time_buffer), "%c", std::localtime(&time_var));
    time_stamp = time_buffer;
    time_stamp += " [";
    time_stamp += msg;
    time_stamp += "]";
    return (time_stamp);
}

void            Logger::log(std::string const & dest, std::string const & message) {

    loggers_func          func[NUM] = { &Logger::logToConsole, 
                                        &Logger::logToFile };

    std::string const   avaible_func[NUM] = { "console",
                                              "file" };

    for (unsigned i = 0; i < NUM; ++i) {

        if (avaible_func[i].compare(dest) == 0)
            CALL_FUNC(this, func[i]) (this->makeLogEntry(message));
    }
}
