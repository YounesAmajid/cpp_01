/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:27:32 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/26 21:03:52 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *newzombie(std::string name){
    
    Zombie *o_zombie;

    o_zombie = new Zombie;
    o_zombie->set_name(name);
    o_zombie->announce();
    return (o_zombie);
}
