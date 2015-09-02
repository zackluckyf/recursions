//
//  main.cpp
//  recursive-addition
//
//  Created by Zack Fanning on 9/2/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>

static int total = 0;

int addition(int n);

int main(int argc, const char * argv[])
{
    int n;
    std::cout << "Enter the number of 2*n you want added (i.e. n = 3 sum = 2*1 + 2*2 + 2*3): ";
    std::cin >> n;
    int x = addition(n);
    std::cout << "The sum is: " << x << "\n";
    return 0;
}

int addition(int n)
{
    if (n == 1)
    {
        return 2;
    }
    total = 2*n + addition(n - 1);
    return total;
}