// Write a C code that will ask the user to enter 3 numbers, the program will print the maximum number of them.
#include <stdio.h>

int main()
{
    int x, y, z, max;

    printf("Enter 1st Number: ");
    scanf("%d", &x);
    
    printf("Enter 2nd Number: ");
    scanf("%d", &y);
    
    printf("Enter 3rd Number: ");
    scanf("%d", &z);

    if(x >= y && x >= z){
        max = x;
    } else if(y >= x && y >= z) {
        max = y;
    } else if(z >= x && z >= y) {
        max = z;
    }
    printf("Max Number: %d", max);

    return 0;
}
