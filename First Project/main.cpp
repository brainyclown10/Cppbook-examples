//
//  main.cpp
//  First Project
//
//  Created by Brandon Hu on 12/28/17.
//  Copyright © 2017 Brandon Hu. All rights reserved.
//

#include <iostream>
/*
 *    Simple main function:
 *    Read two numbers and write their sum.
 */

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0; // variables to hold the input we read
    std::cin >> v1 >> v2; // read input
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}

