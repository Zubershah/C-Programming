/*
Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/
#include <stdio.h>

int main()
{
    float salary1, salary2;
    char name1[10], name2[10];

    printf("enter the name\n");
    scanf("%9s", name1);
    printf("enter the salary\n");
    scanf("%f", &salary1);

    printf("enter the name\n");
    scanf("%9s", name2);
    printf("enter the salary\n");
    scanf("%f", &salary2);

    FILE *ptr;
    ptr = fopen("Text.txt", "w");
    fprintf(ptr, "%s, %f\n", name1, salary1);
    fprintf(ptr, "%s, %f\n", name2, salary2);

    return 0;
}