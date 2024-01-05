/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:05:34 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/05 19:25:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int argc, char **argv){
    std::string line;
    size_t index;
    size_t lenght;
    std::string oufilename;
    std::string replace;
    std::string replace2;
    
    if (argc == 4){
        oufilename = argv[1];
        oufilename += ".replace";
        std::ifstream inputFile(argv[1]);
        std::ofstream outputFile(oufilename.c_str());
        if(!inputFile.is_open() && !outputFile.is_open())
            return 0;
        replace = argv[3];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        for (;std::getline(inputFile, line, '\n');){

            for (;(index = line.find(argv[2])) != std::string::npos;){
                line.erase(index, s1.length()); 
                line.insert(index, s2);
                index += s2.length();
            }
            outputFile << line  << '\n';
        }
    }
    return 0;
}