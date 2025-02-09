// Write a C code that ask the user to enter 10 numbers, then ask him to enter another number to search on it in the 10 numbers.

#include <stdio.h>

void searching(int arr[], int size, int num);

int main()
{
    int nums[10], num;
    for(int i = 0; i < 10; i++){
        printf("Enter Number[%d]: ", i);
        scanf("%d", &nums[i]);
    }
    printf("Enter Value to Search: ");
    scanf("%d", &num);

    searching(nums, 10, num);

    return 0;
}

void searching(int arr[], int size, int num)
{
    for(int i = 0; i < size; i++){
        if(num == arr[i]){
            printf("Number %d found!\n", num);
            break;
        } else {
            printf("Number %d not found!\n", num);
        }
    }
}
