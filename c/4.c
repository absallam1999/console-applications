// Write a C code to print result of Bitwise operations.

#include <stdio.h>

int main()
{ 
    int x = 7;
    int y = 4;

    printf("%d & %d = %d\n", x, y, x & y);
    printf("%d | %d = %d\n", x, y, x | y);
    printf("%d ^ %d = %d\n", x, y, x ^ y);
    printf("%d >>1 = %d\n", x , x >> 1);
    printf("%d <<2 = %d\n", y, y << 2);

    return 0;
}
