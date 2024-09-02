/*
 
    Simple Calculator to Calculate User Inputs
    
*/

using System;

namespace Simple_Calculator
{
    internal class Program
    {
        static void Main()
        {

            int a, b;

            Console.WriteLine("=========================");
            Console.WriteLine("=== Simple Calculator ===");
            Console.WriteLine("=========================");

            Console.WriteLine("Enter 1st Number to Calculate");
            a = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter 2nd Number to Calculate");
            b = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine(a + " + " + b + " = " + (a + b));
            Console.WriteLine(a + " - " + b + " = " + (a - b));
            Console.WriteLine(a + " * " + b + " = " + (a * b));
            Console.WriteLine(a + " / " + b + " = " + (a / b));
            Console.WriteLine(a + " % " + b + " = " + (a % b));

            Console.ReadLine();

        }
    }
}
