/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:31:02 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/28 12:44:01 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon{
private:
    std::string type;
public:
    Weapon(std::string tpe);
    void set_Weapon(std::string str);
    const std::string& getWeapon();
};