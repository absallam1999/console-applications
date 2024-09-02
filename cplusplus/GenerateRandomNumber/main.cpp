/*
 ** Name:        Generate Random Number
 ** Version:     1.0.0
 ** Description: Application that can Generate Random Number Based on User Input
 ** Author:      Absallam
 ** Tools:       C++
*/

#include <iostream>
#include <cmath>

void generateRandNum(int& num) {
    srand(time(0));
    std::cout << (rand() * num) + 1;
}

int main()
{
    int num;
    std::cout << "Enter Length to Generate\n";
    std::cin >> num;

    generateRandNum(num);
    return 0;
}