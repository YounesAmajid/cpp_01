/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:44:29 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 13:11:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    randomChump("new zombie");

    Zombie *new_z = newzombie("newzombie");
    new_z->announce();
    delete(new_z);
}