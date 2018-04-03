/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 15:59:14 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/06/14 15:59:15 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <thread>
#include <chrono>

int     main(void) {

    Logger      session("log");

    session.log("console", "vpopovyc");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    session.log("console", "mdubrovts");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    session.log("console", "mkrutik");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    session.log("file", "vpopovyc");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    session.log("file", "mdubrovts");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    session.log("file", "mkrutik");

    return (0);
}