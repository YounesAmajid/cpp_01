/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:05:34 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/03 11:41:43 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Replace.hpp"
#include <iostream>
#include <fstream>
#include <cstring>


int main (int argc, char **argv){
    std::string line;
    size_t index;
    std::string oufilename;
    std::string replace;
    
    if (argc == 4){
        oufilename = argv[1];
        oufilename += ".replace";
        std::ifstream inputFile(argv[1]);
        std::ofstream outputFile(oufilename.c_str());
        if(!inputFile.is_open() && !outputFile.is_open())
            return 0;
        for (;std::getline(inputFile, line, '\n');){
            if ((index = line.find(argv[2])) != std::string::npos){
                replace = line.substr(0, index);
                replace += argv[3];
                outputFile << replace << std::endl;
            }
            else
                outputFile << line << std::endl;
        }
    }
    return 0;
}