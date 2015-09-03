//
//  main.cpp
//  Logarithm
//
//  Created by Zack Fanning on 9/3/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>

int log(int total, int base);
static int sum = 0;

int main(int argc, const char * argv[])
{
    int total, base;
    std::cout << "Enter a base and its integer exponent result to find out its exponent i.e 2 32 = 5, 5 25 = 2: ";
    std::cin >> base >> total;
    int answer = log(total, base);
    std::cout << "The power is: " << answer;
    return 0;
}

int log(int total, int base)
{
    if (total == 1)
    {
        return sum;
    }
    else if (total > 1)
    {
        sum++;
        return log(total/base, base);
    }
    return 0;
}