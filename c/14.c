/* Write a C code to manage a class of 10 students.
 ** Each student studies 4 subjects (Math, Language, Physicsand Chemistry).
 ** First define an array of 10 elements and assign random grads for students.
 ** The System will ask the user to enter the student ID then the system will show its grads.
 ** The System shall manage wrong IDs.
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct student
{
    int ID;
    float math;
    float lang;
    float physics;
    float chemistry;
} stud;

int main()
{
    stud students[10];
    int student_ID, index = 0;
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        students[i].ID = i + 1;
        students[i].math = (rand() + (i + 1)) % 100;
        students[i].lang = (rand() + (i + 1)) % 100;
        students[i].physics = (rand() + (i + 1)) % 100;
        students[i].chemistry = (rand() + (i + 1)) % 100;
    }

    printf("Enter Student ID: ");
    scanf("%d", &student_ID);

    for (int i = 0; i < 10; i++)
    {
        if (students[i].ID == student_ID)
        {
            index = i;
        }
    }
    if (index == 0)
    {
        printf("INVALID ID.\n");
    }
    else
    {
        printf("Student ID: %d\n", students[index].ID);
        printf("Math Grade: %.2f\n", students[index].math);
        printf("Lang Grade: %.2f\n", students[index].lang);
        printf("Physics Grade: %.2f\n", students[index].physics);
        printf("Chemistry Grade: %.2f\n", students[index].chemistry);
    }

    return 0;
}
