/* Write a C code that defines a struct for employees that contains his salary, bouns, deductions. 
   ** The program shall ask the user o enter these information for three employees(Ahmed, Waleed and Amr).
   ** Then the program will print the total values shall be supplied by finance team.
*/
#include <stdio.h>

typedef struct employee
{
    float salary;
    float bouns;
    float deductions;
} emp;

int main()
{
    emp emp1, emp2, emp3;

    printf("Please Enter Ahmed Salary: ");
    scanf("%f", &emp1.salary);
    printf("Please Enter Ahmed Bouns: ");
    scanf("%f", &emp1.bouns);
    printf("Please Enter Ahmed deductions: ");
    scanf("%f", &emp1.deductions);

    printf("Please Enter Waleed Salary: ");
    scanf("%f", &emp2.salary);
    printf("Please Enter Waleed Bouns: ");
    scanf("%f", &emp2.bouns);
    printf("Please Enter Waleed deductions: ");
    scanf("%f", &emp2.deductions);

    printf("Please Enter Amr Salary: ");
    scanf("%f", &emp3.salary);
    printf("Please Enter Amr Bouns: ");
    scanf("%f", &emp3.bouns);
    printf("Please Enter Amr deductions: ");
    scanf("%f", &emp3.deductions);

    float total = ((emp1.salary + emp1.bouns) - emp1.deductions) + ((emp2.salary + emp2.bouns) - emp2.deductions) + ((emp3.salary + emp3.bouns) - emp3.deductions);

    printf("Total Value Needed is: %.2f", total);

    return 0;
}
