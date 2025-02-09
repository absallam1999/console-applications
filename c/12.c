/* Write a C code that implement 2 functions:
    1. Function to get maximum of 4 values
    2. Function to get minimum of 4 values
    The program will ask the user first to enter the 4 values. then print the maximum number and minimum number of them.
*/

#include <stdio.h>

int getmax(int num1, int num2, int num3, int num4, int max);
int getmin(int num1, int num2, int num3, int num4, int min);

int main()
{
    int num1, num2, num3, num4, max, min = 0;
    printf("Enter 1st Nmber: ");
    scanf("%d", &num1);
    printf("Enter 2nd Nmber: ");
    scanf("%d", &num2);
    printf("Enter 3rd Nmber: ");
    scanf("%d", &num3);
    printf("Enter 4th Nmber: ");
    scanf("%d", &num4);

    max = getmax(num1, num2, num3, num4, max);
    min = getmin(num1, num2, num3, num4, min);

    printf("Maximum Number: %d\n", max);
    printf("Minimum Number: %d\n", min);

    return 0;
}

int getmax(int num1, int num2, int num3, int num4, int max){
    if(num1 > num2 && num1 > num3 && num1 > num4){
        max = num1;
    } else if(num2 > num1 && num2 > num3 && num2 > num4){
        max = num2;
    } else if(num3 > num1 && num3 > num2 && num3 > num4) {
        max = num3;
    } else if (num4 > num1 && num4 > num2 && num4 > num3){
        max = num4;
    }
    return max;
}
int getmin(int num1, int num2, int num3, int num4, int min){
    if(num1 > num2 && num1 > num3 && num1 < num4){
        min = num1;
    } else if(num2 < num1 && num2 < num3 && num2 < num4){
        min = num2;
    } else if(num3 < num1 && num3 < num2 && num3 < num4) {
        min = num3;
    } else if (num4 < num1 && num4 < num2 && num4 < num3){
        min = num4;
    }
    return min;
}
