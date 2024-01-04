/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:34:53 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 11:39:34 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB{
private:
    Weapon *wpn;
    std::string name;
public:
    void setWeapon(Weapon weapn);
    HumanB(std::string h_a);
    void attack();
};