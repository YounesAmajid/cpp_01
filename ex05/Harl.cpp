/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:01:04 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/28 20:42:42 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level){
    std::map<std::string, void (Harl::*)()> level_f= {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"ERROR", &Harl::error},
        {"WARNING", &Harl::warning}
    };
    std::map<std::string, void (Harl::*)()>::iterator it = level_f.find(level);
    if (it != level_f.end())
        (this->*(it->second))();
}

void Harl::error(){
    std::cout << "ERROR" << std::endl;
}

void Harl::info(){
    std::cout << "INFO" << std::endl;
}

void Harl::debug(){
    std::cout << "DEBUG" << std::endl;
}

void Harl::warning(){
    std::cout << "WARNING" << std::endl;
}

