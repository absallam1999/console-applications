// Write a C code that will ask the user to enter two values and print their summation and multiplication.
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Please Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Please Enter 2nd Number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d x %d = %d\n" , num1, num2, num1 * num2);
    return 0;
}
