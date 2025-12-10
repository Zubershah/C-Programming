#include <stdio.h>
int main()
{
    int marks[5];
    printf("enter the marks of 5 students\n");

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    // printf("marks 0 is %d\n", marks[0]);
    // printf("marks 1 is %d\n", marks[1]);
    // printf("marks 2 is %d\n", marks[2]);
    // printf("marks 3 is %d\n", marks[3]);
    // printf("marks 4 is %d\n", marks[04]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("marks%d is %d\n", i, marks[i]);
    }
    return 0;
}