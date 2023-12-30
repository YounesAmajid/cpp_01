/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:26:47 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/26 21:00:29 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

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

int main ()
{
    Zombie test;

    test.set_name("younes");
    std::cout << test.get_name() << std::endl;

    Zombie * yy = newzombie("new zombie");
    delete(yy);
}