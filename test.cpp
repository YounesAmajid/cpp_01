/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:47:50 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/04 11:54:36 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

int main() {
    int originalVar = 42;
    int& referenceVar = originalVar; 

    std::cout << "Original Variable:        " << originalVar << std::endl;
    std::cout << "Reference Variable:       " << referenceVar << std::endl;

    // Modifying the original variable
    originalVar = 99;

    std::cout << "After modifying original variable:" << std::endl;
    std::cout << "Original Variable:        " << originalVar << std::endl;
    std::cout << "Reference Variable:       " << referenceVar << std::endl;

    // Modifying the reference variable
    referenceVar = 55;

    std::cout << "After modifying reference variable:" << std::endl;
    std::cout << "Original Variable:        " << originalVar << std::endl;
    std::cout << "Reference Variable:       " << referenceVar << std::endl;

    return 0;
}

// Ref1.cpp
// Demonstrates the definition and use of references.
// ---------------------------------------------------
// #include <iostream>
// #include <string>

// using namespace std;

// float x = 10.7F; // Global

// int main()
// {
//     float &rx = x; // Local reference to x
//     // double &ref = x; // Error: different type!
//     rx *= 2;
//     cout << " x = " << x << endl // x = 21.4
//     << " rx = " << rx << endl; // rx = 21.4
//     const float& cref = x; // Read-only reference
//     cout << "cref = " << cref << endl; // ok!
//     // ++cref; // Error: read-only!
//     const string str = "I am a constant string!";
//     // str = "That doesn't work!"; // Error: str constant!
//     // string& text = str; // Error: str constant!
//     const string& text = str; // ok!
//     cout << text << endl; // ok! Just reading.
//     return 0;
// }