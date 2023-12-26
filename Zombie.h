/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:56:06 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/26 21:01:56 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <string>
#include "Zombie.hpp"


class Zombie{
private:
    std::string name;
public:
    ~Zombie();
    void announce();
    void set_name(std::string str);
    std::string get_name();
};

Zombie *newzombie(std::string name);
void randomChump( std::string name );
