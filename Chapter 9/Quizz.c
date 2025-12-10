/*Write a program to store the details of 3 employees from user defined data.
Use the structure declared above.*/
#include <stdio.h>
#include <string.h>

struct employee
{
    float salary;
    char name[20];
};

int main()
{
    struct employee e1, e2, e3;
    printf("enter the salary and name of employee 1\n");
    scanf("%f", &e1.salary);
    scanf("%19s", e1.name);

    printf("enter the salary and name of employee 2\n");
    scanf("%f", &e2.salary);
    scanf("%19s", e2.name);

    printf("enter the salary and name of employee 3\n");
    scanf("%f", &e3.salary);
    scanf("%19s", e3.name);

    printf("name %s and salary is %f are\n", e1.name, e1.salary);
    printf("name %s and salary is %f are\n", e2.name, e2.salary);
    printf("name %s and salary is %f are\n", e3.name, e3.salary);

    return 0;
}