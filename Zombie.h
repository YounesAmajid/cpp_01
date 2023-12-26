/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:56:06 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/26 21:08:22 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <string>


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
