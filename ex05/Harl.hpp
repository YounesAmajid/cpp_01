/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:01:00 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/28 19:45:46 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Harl.hpp"
#include <iostream>
#include <string>
#include <map>

class Harl{
private:
    void debug();
    void info();
    void warning();
    void error();
public:
    void complain(std::string level);
};