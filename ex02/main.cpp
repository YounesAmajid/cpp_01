/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:11:08 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 17:16:58 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (){
    
    std::string str = "HI THIS IS BRAIN";
    std::string *str_p = &str;
    std::string &str_r = str;

    std::cout << "stringAddr : " << &str << std::endl;
    std::cout << "stringPTR  : " << str_p << std::endl;
    std::cout << "stringREF  : " << &str_r << std::endl;

    std::cout << str << std::endl;
    std::cout << *str_p << std::endl;
    std::cout << str_r << std::endl;
}