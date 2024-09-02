/*

    Calculate Rectangle Area
 
*/

using System;

namespace Calc_Rec_Area
{
    internal class Program
    {
        static void Main()
        {

            double h, w;

            Console.WriteLine("================================");
            Console.WriteLine("=== Calculate Rectangle Area ===");
            Console.WriteLine("================================");

            Console.WriteLine("Enter Rectangle Height in cm");
            h = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter Rectangle Width in cm");
            w = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Rectangle Area = " + h * w + "cm");

            Console.ReadLine();
        }
    }
}
