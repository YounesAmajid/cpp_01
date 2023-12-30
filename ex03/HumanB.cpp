/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:35:00 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/28 14:03:52 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string hb_n) : wpn(NULL), name(hb_n){

}

void HumanB::setWeapon(Weapon *Wen){
    wpn = Wen;
}

void HumanB::attack(){
    if (wpn->getWeapon())
        std::cout << name << " attacks with their " << wpn->getWeapon() << std::endl;
    else
        return ;
}