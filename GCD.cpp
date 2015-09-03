//
//  main.cpp
//  GCD
//
//  Created by Zack Fanning on 9/3/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>



int GCD(int x, int y);

int main(int argc, const char * argv[])
{
    int x, y, temp;
    std::cout << "Enter two integers to see their greatest common divisor: ";
    std::cin >> x >> y;
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    int z = GCD(x, y);
    std::cout << "The greatest common divisor is: " << z;
    return 0;
}


int GCD(int x, int y)
{
        if (y == 0)
        {
            return x;
        }
        else if (x >= y && y > 0)
        {
            return GCD(y, x%y);
        }
        else
        {
            return -1;
        }
}




