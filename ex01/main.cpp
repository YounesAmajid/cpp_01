/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:24:30 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 13:39:20 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (){
   
    Zombie *test;

    int N = 5;
    test = zombieHorde(N, "Zombie");

    for (int i = 0;i < N; i++)
        test[i].announce();
    delete[] test;
}