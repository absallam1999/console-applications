// Write a C code that ask the user to enter two numbers and print their summation, this program should never ends until the user close the window.

#include <stdio.h>

int main()
{
    int x, y;
    do
    {
        printf("Enter 1st Number: ");
        scanf("%d", &x);

        printf("Enter 2nd Number: ");
        scanf("%d", &y);

        printf("%d + %d = %d\n", x, y, x + y);
    } while (1);
    
    return 0;
}
