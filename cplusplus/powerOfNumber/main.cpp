/*
 ** Name:        Get Power of Number
 ** Version:     1.0.0
 ** Description: Simple Application accept Values from User, Then print Power of These Values
 ** Author:      Absallam
 ** Tools:       C++
*/

#include <iostream>
#include <cmath>

int main()
{
    double num, power;
    int input = 1;

    do
    {
        std::cout << "Enter Your Number ..\n";
        std::cin >> num;

        std::cout << "Enter Power of Number ..\n";
        std::cin >> power;

        std::cout << "Result: " << pow(num, power) << '\n';
        std::cout << "To Continue press '1' or '0' to Exit ..\n";
        std::cin >> input;
    } while (input != 0);

    return 0;
}