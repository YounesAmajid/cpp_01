/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:51:12 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/05 10:44:44 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*ptrf)(void);

void Harl::complain(std::string level){
    int index;
    
    index = 0;
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ptrf f_pointer[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(;index < 4; index++)
        if (level == array[index])
            break ;
    if (index == 5)
        return ;
    switch (index)
    {
        case 0:
            (this->*f_pointer[0])();
        case 1:
            (this->*f_pointer[1])();
        case 2:
            (this->*f_pointer[2])();
        case 3:
            (this->*f_pointer[3])();
            break ;
        default:
            std::cerr << "Unknown level: " << level << std::endl;
            break;
    }
}

void Harl::error(){
    std::cerr << "ERROR: An error occurred: [error description]" << std::endl;
}


void Harl::info(){
    std::cout << "INFO: [information message]" << std::endl;
}

void Harl::debug(){
    std::cerr << "DEBUG: [debug information]" << std::endl;
}

void Harl::warning(){
    std::cerr << "WARNING: [warning description]" << std::endl;
}