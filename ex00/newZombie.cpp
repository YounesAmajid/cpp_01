/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:27:32 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/03 20:09:00 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newzombie(std::string name){
    Zombie *o_zombie;

    o_zombie = new Zombie;
    o_zombie->set_name(name);
    return (o_zombie);
}
