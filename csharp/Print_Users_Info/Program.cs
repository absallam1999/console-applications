/*

    Print Users Info
 
*/

using System;

namespace Print_Users_Info
{
    internal class Program
    {
        static void Main()
        {
            string name, city, country;
            int age;
            double monthlySalary;
            char gender;
            bool isMarried;

            Console.WriteLine("===========================");
            Console.WriteLine("===== Enter Your Info =====");
            Console.WriteLine("===========================");
            
            Console.WriteLine("Enter Your Name");
            name = Console.ReadLine();

            Console.WriteLine("Enter Your Age");
            age = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter Your City");
            city = Console.ReadLine();

            Console.WriteLine("Enter Your Country");
            country = Console.ReadLine();

            Console.WriteLine("Enter Your Salary");
            monthlySalary = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter Your Gender [M/F]");
            gender = Convert.ToChar(Console.ReadLine());

            Console.WriteLine("Are you Married? [True/False]");
            isMarried = Convert.ToBoolean(Console.ReadLine());

            Console.WriteLine("Your Name is: " + name);
            Console.WriteLine("Your Age is: " + age);
            Console.WriteLine("Your City is: " + city);
            Console.WriteLine("Your Gender is: " + gender);
            Console.WriteLine("Your Country is: " + country);
            Console.WriteLine("Your Monthly Salary is: " + monthlySalary);
            Console.WriteLine("Your Married status is: " + isMarried);

            Console.ReadLine();
        }
    }
}
