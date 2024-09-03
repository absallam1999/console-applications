/*
 ** Name:        Calculate Your Age
 ** Version:     2.0.0
 ** Description: Application to Calculate Age in (Months, Weaks, Days, Hours, Minutes, Seconds)
 ** Author:      Absallam
 ** Tools:       C++
*/

#include <iostream>
using namespace std;

int main()
{

    cout << "===========================\n";
    cout << "=== Calculate Your Age  ===\n";
    cout << "===========================\n";
    cout << "Enter Your Age.. \n";

    int age;
    cin >> age;

    int age_in_days = age * 365;
    int age_in_months = age * 12;
    int age_in_hours = age_in_days * 24;
    int age_in_weaks = age_in_months * 4;
    int age_in_minutes = age_in_hours * 60;
    int age_in_seconds = age_in_minutes * 60;

    cout << "Your Age in Months: " << age_in_months << " Months\n";
    cout << "Your Age in Weaks: " << age_in_weaks << " Weaks\n";
    cout << "Your Age in Days: " << age_in_days << " Days\n";
    cout << "Your Age in Hours: " << age_in_hours << " Hours\n";
    cout << "Your Age in Minutes: " << age_in_minutes << " Mintes\n";
    cout << "Your Age in Seconds: " << age_in_seconds << " Seconds\n";
    cout << "** NOTE: ALL THESE VALUES ARE NEARLLY. **";

    return 0;
}
