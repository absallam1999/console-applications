/*

    write aprogram to calculate Triangle Area, then print it on Screen.
 
*/

using System;

namespace Calc_Triangle_Area
{
    internal class Program
    {
        static void Main()
        {
            int a, b;


            Console.WriteLine("===============================");
            Console.WriteLine("=== Calculate Triangle Area ===");
            Console.WriteLine("===============================");

            Console.WriteLine("Enter Length of Triangle Base");
            a = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Enter Triangle Heigth");
            b = Convert.ToInt16(Console.ReadLine());

            Console.WriteLine("Triangle Area = " + ((2/1) * a * b));

            Console.ReadLine();

        }
    }
}
