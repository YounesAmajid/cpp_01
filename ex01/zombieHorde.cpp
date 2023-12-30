/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:45:54 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/27 11:00:58 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name){
    Zombie *o_zombie;

    if (N <= 0 || name.empty())
        return 0;
    o_zombie = new Zombie[N];
    for (int i = 0;i < N; i++){
        o_zombie[i].set_name(name);
        o_zombie[i].announce();
    }
    return o_zombie;
}