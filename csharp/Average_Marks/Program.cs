/*

    write aprogram to ask the user to input 3 marks, then print the average of these 3 marks.
 
*/

using System;

namespace Average_Marks
{
    internal class Program
    {
        static void Main()
        {

            int a, b, c;

            Console.WriteLine("=====================");
            Console.WriteLine("=== Enter 3 Marks ===");
            Console.WriteLine("=====================");

            Console.WriteLine("Enter 1st Mark");
            a = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter 2nd Mark");
            b = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter 3rd Mark");
            c = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Your Average Mark is: " + ((a + b + c) / 3));

            Console.ReadLine();

        }
    }
}
