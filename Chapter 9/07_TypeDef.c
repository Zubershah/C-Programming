// #include <stdio.h>

// int main()
// {
//     typedef int Zooby;
//     /*
//     typedef allow us to create or rename a data type
//     here Zooby is int data type created or renamed
//     most commonly used in structure
//     */

//     // int a = 53;
//     // printf("the value of a is %d\n", a);

//     Zooby a = 53;
//     printf("the value of a is %d\n", a);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main()
{

    Emp e1;  /*struct employee e1; struct employee is renamed as Emp using typedef*/
    e1.code = 33;
    e1.salary = 43434.24;
    strcpy(e1.name, "Zooby");

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);

    return 0;
}