/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:29:52 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/28 12:44:05 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string tpe) : type(tpe){
    
}

void Weapon::set_Weapon(std::string str){
    type = str;
}

const std::string& Weapon::getWeapon(){
    return type;
}