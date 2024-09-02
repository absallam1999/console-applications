/*
 ** Name:        Time Converter Application
 ** Version:     1.0.0
 ** Description: Time Converter to Convert Time From Seconds to (Days, Hours, Minutes)
 ** Author:      Absallam
 ** Tools:       C++
*/

#include <iostream>
using namespace std;

int main()
{

    int seconds;
    int secondsPerMinute = 60;
    int secondsPerHour = 60 * 60;
    int secondsPerDay = 24 * 60 * 60;

    cout << "Enter Number of Seconds." << endl;
    cin >> seconds;

    int numberOfDays = (seconds / secondsPerDay);
    seconds = seconds % secondsPerDay;

    int numberOfHours = (seconds / secondsPerHour);
    seconds = seconds % secondsPerHour;

    int numberOfMinutes = (seconds / secondsPerMinute);
    seconds = seconds % secondsPerMinute;
    
    cout << "Total = " << numberOfDays << " : " << numberOfHours << " : " << numberOfMinutes << " : " << seconds << endl;


    return 0;
}