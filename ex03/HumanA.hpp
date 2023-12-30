/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    HumanA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:34:56 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/28 11:13:11 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Weapon.hpp"

class HumanA{
private:
    Weapon &wpn;
    std::string name;
public:
    HumanA(std::string h_a, Weapon &type);
    void attack();
};