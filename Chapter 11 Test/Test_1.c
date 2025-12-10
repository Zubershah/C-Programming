/*Write a program to dynamically create an array of size 6 capable of storing 6
integers. Use the array to store 6 integers entered by the user.*/
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = (int *)malloc(6 * sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("enter the %d value\n", i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("the value of %d is %d\n", i, ptr[i]);
//     }

//     free(ptr);

//     return 0;
// }

/* using calloc().*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("enter the %d value\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d is %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}
