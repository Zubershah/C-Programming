/* Complete this show function to display the content of employee. */
#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


void show(struct employee);
void show(struct employee x)
{
    printf("Code is %d\nSalary is %f\nName is %s", x.code, x.salary, x.name);
}

int main()
{

    struct employee e1;
    e1.code = 23;
    strcpy(e1.name, "Zooby");
    e1.salary = 23.23;
    show(e1);

    return 0;
}