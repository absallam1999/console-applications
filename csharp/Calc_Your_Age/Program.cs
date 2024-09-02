/*
 
    Calculate Your Age in Days 
*/

using System;

namespace Calc_Your_Age
{
    internal class Program
    {
        static void Main()
        {
            int age;

            Console.WriteLine("==============================");
            Console.WriteLine("===== Calculate Your Age =====");
            Console.WriteLine("==============================");

            Console.WriteLine("Enter Your Age");
            age = Convert.ToInt16(Console.ReadLine());

            int age_in_Days = age * 365;
            int age_in_Hours = age_in_Days * 24;
            int age_in_Minutes = age_in_Hours * 60;
            int age_in_Seconds = age_in_Minutes * 60;

            Console.WriteLine("Your Age is " + age);
            Console.WriteLine("Your Age in Days is " + age_in_Days);
            Console.WriteLine("Your Age in Hours is " + age_in_Hours);
            Console.WriteLine("Your Age in Minutes is " + age_in_Minutes);
            Console.WriteLine("Your Age in Seconds is " + age_in_Seconds);
            Console.WriteLine("Be Sure That numbers are not 100% Correct.. nothing in this world you can be 100% certain of.");

            Console.ReadLine();
        }
    }
}
