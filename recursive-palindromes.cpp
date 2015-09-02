//
//  main.cpp
//  recursive-palindromes
//
//  Created by Zack Fanning on 9/2/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>

static int x = 0;

void palindrome(std::string input, int size);

int main(int argc, const char * argv[]) {
    std::string input;
    int size;
    std::cout << "Enter a number to check if it's a palindrome: ";
    std::getline(std::cin, input);
    size = input.size();
    palindrome(input, size);
    return 0;
}

void palindrome(std::string input, int size)
{
    if (size == x || x > size)
    {
        std::cout << input << " is a palindrome";
    }
    else if (input.at(x) == input.at(size-1))
    {
        x++;
        size--;
        palindrome(input, size);
    }
    else
    {
        std::cout << input << " is not a palindrome";

    }
}