/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:34:53 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/28 13:53:55 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB{
private:
    Weapon *wpn;
    std::string name;
public:
    HumanB(std::string h_a);
    void setWeapon(Weapon *wen);
    void attack();
};