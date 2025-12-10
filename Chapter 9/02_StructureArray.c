#include <stdio.h>
#include <string.h>

struct employee
{
    float salary;
    char name;
};

int main()
{
    struct employee facebook[100];
    facebook[0].salary = 372322.22;
    facebook[1].salary = 84366.34;
    strcpy(facebook[0].name, "Zooby");
    strcpy(facebook[1].name, "Shah");

    printf("the name of facebook employee 1 is %s and salary of %f\n", facebook[0].name, facebook[0].salary);

    return 0;
}