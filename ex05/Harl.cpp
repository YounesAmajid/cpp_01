/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:01:04 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/01 16:48:26 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*ptrf)(void);

void Harl::complain(std::string level){
    
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ptrf f_pointer[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(int i = 0;i < 4; i++){
        if (level == array[i]){
            (this->*f_pointer[i])();
            return ;
        }
    }
}

void Harl::error(){
    std::cerr << "ERROR" << std::endl;
}

void Harl::info(){
    std::cout << "INFO" << std::endl;
}

void Harl::debug(){
    std::cerr << "DEBUG" << std::endl;
}

void Harl::warning(){
    std::cerr << "WARNING" << std::endl;
}

