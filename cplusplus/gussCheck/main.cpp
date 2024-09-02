/*  
 ** Name:        Guss the Check Application
 ** Version:     1.0.0
 ** Description: Application to Read Bill Value then Add Service Fees and Sales Tax and print Total Bill on Screen.
 ** Author:      Absallam
 ** Tools:       C++
*/

// CONSTANTS:  serviceFee = 10%  | salesTax = 16% 

#include <iostream>
using namespace std;

int main()
{

    int bill;
    
    cout << "Enter Bill Value: " << '\n';
    cin >> bill;

    cout << "Total Bill = " << bill * 1.1 * 1.16 << endl;
    

    return 0;
}