#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2;
    e1.code = 343;
    e1.salary = 34.33;
    struct employee *ptr;
    ptr = &e1;
    printf("%d %f\n", ptr->code, ptr->salary);
    /* printf("%d %f\n", (*ptr).code,(*ptr).salary);
       instead of (*ptr).code we can write ptr->code
    */

    return 0;
}