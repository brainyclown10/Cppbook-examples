//
//  main.cpp
//  First Project
//
//  Created by Brandon Hu on 12/28/17.
//  Copyright © 2017 Brandon Hu. All rights reserved.
//

#include <iostream>

int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value)
        sum += value;    // equivalent to sum = sum + value
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}
