// Write a C code that ask the user to enter his ID and his password, if the ID is correct the system will ask the user to enter his password up to 3 times, if he entered the password right the system welcomes hime, if the three times are incorrect, the system print "No More Tries". if the user ID is incorrect the system print "You are not register".

#include <stdio.h>

#define VALID_ID 4321
#define VALID_PASSWORD 5678

int main()
{
    int userID, password, attemps = 0;

    printf("Enter User ID: ");
    scanf("%d", &userID);

    if (userID == VALID_ID)
    {
        while (attemps < 3)
        {
            printf("Enter User Password: ");
            scanf("%d", &password);

            if (password == VALID_PASSWORD)
            {
                printf("You Are Welcome.\n");
                break;
            }
            else
            {
                printf("Incorrect password. Try again.\n");
                attemps++;
            }
        }
        if (attemps == 3)
        {
            printf("No More Tries.\n");
        }
    }
    else
    {
        printf("You Are Not Registered.\n");
    }
    return 0;
}
