/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:26:47 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/03 20:10:04 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(){
    std::cout << name << " :" <<"destroyed" << std::endl;
}

std::string Zombie::get_name(){
    return name;
}

void Zombie::set_name(std::string str){
    name = str;
}
void Zombie::announce(void){
    std::cout << get_name() << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
