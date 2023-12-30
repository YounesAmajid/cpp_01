/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:11:08 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/27 11:28:22 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (){
    
    std::string *str_p;
    std::string str = "HI THIS IS BRAIN";
    str_p = &str;
    std::cout << "stringPTR: " << str_p << std::endl;
    
    std::string &str_r = str;
    std::cout << "stringREF: " << &str_r << std::endl;

    std::cout << str << std::endl;
    std::cout << *str_p << std::endl;
    std::cout << str_r << std::endl;
}