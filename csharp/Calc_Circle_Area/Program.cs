/*

    write aprogram to Calculate Circle Area, then print it on screen
 
*/

using System;

namespace Calc_Circle_Area
{
    internal class Program
    {
        static void Main()
        {
            Console.WriteLine("==============================");
            Console.WriteLine("=== Calculate Circle Area ===");
            Console.WriteLine("=============================");

            Console.WriteLine("Enter Radius Number");
            int a = Convert.ToInt16(Console.ReadLine());
            var Area = (3.14) * (a * a);

            Console.WriteLine("Circle Area = " + Area);

            Console.ReadLine();
        }
    }
}
