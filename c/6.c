// Write a C code to print sizeof(datatype).

#include <stdio.h>

int main()
{
    int x;
    char y;
    float z;
    double k;

    printf("Sizeof(char): %dByte\n", sizeof(y));
    printf("Sizeof(int): %dByte\n", sizeof(x));
    printf("Sizeof(float): %dByte\n", sizeof(z));
    printf("Sizeof(double): %dByte\n", sizeof(k));

    return 0;
}
