/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:27:29 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/26 21:03:55 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void randomChump( std::string name ){
    Zombie *r_zombie;

    r_zombie = new Zombie;
    r_zombie->set_name(name);
    r_zombie->announce();
    delete r_zombie;
}
