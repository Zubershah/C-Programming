/*Write a program to illustrate the use of arrow operator → in C.*/
#include <stdio.h>
#include <string.h>

typedef struct employee
{
    float salary;
    char name[10];
} Emp;

int main()
{
    Emp e1;
    Emp *ptr = &e1;
    ptr->salary = 24242.42;
    strcpy(ptr->name, "Zooby");
    printf("salary is %f and name is %s\n", ptr->salary, ptr->name);
    // printf("salary is %f and name is %s\n", e1.salary, e1.name);

    return 0;
}