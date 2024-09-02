/*

    Calculate Your Salary
 
*/

using System;

namespace Calc_Your_Salary
{
    internal class Program
    {
        static void Main()
        {

            double salary;

            Console.WriteLine("=============================");
            Console.WriteLine("=== Calculate Your Salary ===");
            Console.WriteLine("=============================");

            Console.WriteLine("Enter Your Monthly Salary");
            salary = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Your Monthly Salary is: " + salary);
            Console.WriteLine("Your Yearly Salary is: " + salary * 12);

            Console.ReadLine();
        }
    }
}
