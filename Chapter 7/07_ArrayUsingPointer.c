#include <stdio.h>

int main()
{
    int marks[] = {12, 24, 36, 48};
    int *ptr = marks; // int *ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("the marks at index %d is %d\n", i, *ptr); // printf("the marks at index %d is %d\n", i, marks[i]);
        ptr++;                                          
    }

    return 0;
}
