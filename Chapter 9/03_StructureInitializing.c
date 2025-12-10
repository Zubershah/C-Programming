#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{

    struct employee Initializing = {23, 23.34, "Zooby"};
    printf("%d %f %s\n", Initializing.code, Initializing.salary, Initializing.name);

    return 0;
}