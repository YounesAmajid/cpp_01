/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:33:31 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 12:13:21 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string h_a, Weapon& type) : wpn(type), name(h_a){
}

void HumanA::attack(){
    std::cout << name << " attacks with their " << wpn.getType() << std::endl;
}