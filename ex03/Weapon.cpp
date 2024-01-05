/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:29:52 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 17:04:54 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string tpe) : type(tpe){
}

void Weapon::setType(std::string str){
    type = str;
}

const std::string& Weapon::getType(){
    return type;
}