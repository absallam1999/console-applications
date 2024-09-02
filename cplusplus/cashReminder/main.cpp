/*
 ** Name:        Cash Reminder Application
 ** Version:     1.0.0
 ** Description: Application to Calculate Reminder for Customer Paid Money of Bill
 ** Author:      Absallam
 ** Tools:       C++
*/

#include <iostream>

int main()
{
    int bill, money;

    std::cout << "Enter Bill Value: " << '\n';
    std::cin >> bill;

    std::cout << "Enter Amount Money: " << '\n';
    std::cin >> money;

    std::cout << "Total : " << money - bill << '\n';

    return 0;
}