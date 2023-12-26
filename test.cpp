/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:31:56 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/26 15:51:04 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


class test{
private:
    std::string name;    
public:
    void set_name(std::string name);
    std::string get_name();
    ~test()
    {
        std::cout << "the object was deleted !" << std::endl;
    }
};


void test::set_name(std::string str)
{
        name = str;
}

std::string test::get_name()
{
    return name;
}

int main (){
    
    test let;
    
    std::string str;

    std::cin >> str;
    
    let.set_name(str);
    std::cout << let.get_name() << std::endl;
    return 0;
}