/*Write a program to create an array of 10 integers and store multiplication table of
5 in it. */

// #include <stdio.h>

// int main()
// {
//     int arr[10];

//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = 5 * (i + 1);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("the value of 5 X %d = %d\n", i + 1, arr[i]);
//     }

//     return 0;
// }

/*Repeat problem 3 for a general input provided by the user using scanf. */

#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("enter the desired number\n");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("the value of  %d X %d = %d\n", n, i + 1, arr[i]);
    }

    return 0;
}