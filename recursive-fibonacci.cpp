//
//  main.cpp
//  recursive-fibonacci
//
//  Created by Zack Fanning on 9/2/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>

int fibonacci(int x);

int main(int argc, const char * argv[]) {
    int x;
    int y;
    std::cout << "Enter which fibonacci number you would like to know: ";
    std::cin >> x;
    y = fibonacci(x);
    std::cout << "\nThat entry is: " << y;
    return 0;
}

int fibonacci(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    return (fibonacci(x - 1) + fibonacci(x - 2));
}