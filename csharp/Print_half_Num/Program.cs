/*

    Write aprogram to ask the user to input number, then print the half of the number.
 
*/

using System;

namespace Print_half_Num
{
    internal class Program
    {
        static void Main()
        {
            decimal num;

            Console.WriteLine("===================================");
            Console.WriteLine("=== Enter Number to Divide by 2 ===");
            Console.WriteLine("===================================");

            Console.WriteLine("Enter Number");
            num = Convert.ToDecimal(Console.ReadLine());

            Console.WriteLine("Your Number is: " + num);
            Console.WriteLine("Soultion is: " + num / 2);

            Console.ReadLine();

        }
    }
}
