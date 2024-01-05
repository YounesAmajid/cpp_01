/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:49:02 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 17:10:26 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie{
private:
    std::string name;
public:
    void set_name(std::string str);
    void announce();
};

Zombie* zombieHorde(int N, std::string name);
