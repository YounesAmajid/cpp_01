/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:01:06 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 17:03:41 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){

    Harl hrl;
    
    (void)argc;
    if (argc == 2)
        hrl.complain(argv[1]);
    return 0;

}