//
//  main.cpp
//  recursive-string-reversal
//
//  Created by Zack Fanning on 9/2/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>

void reverse(std::string input, int size);

int main(int argc, const char * argv[])
{
    std::string input;
    std::cout << "Input the string you want reversed: ";
    std::getline (std::cin, input);
    int length = input.size();
    reverse(input, length);
    
    
    return 0;
}

void reverse(std::string input, int size)
{
    if (size == 0)
    {
        
    }
    else
    {
    std::cout << input.at(size - 1);
    size--;
    reverse(input, size);
    }
}