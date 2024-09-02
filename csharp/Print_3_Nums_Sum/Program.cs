/*
 
    write aprogram to ask the user to input 3 numbers, then print the sum of 3 nums
 
*/

using System;

namespace Print_3_Nums_Sum
{
    internal class Program
    {
        static void Main()
        {

            int a, b, c;

            Console.WriteLine("======================");
            Console.WriteLine("=== Enter 3 number ===");
            Console.WriteLine("======================");
            
            Console.WriteLine("Enter 1st Number");
            a = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter 2nd Number");
            b = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter 3rd Number");
            c = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("You Enterd " + a + " + " + b + " + " + c + " = " + (a + b + c));

            Console.ReadLine();
        }
    }
}
