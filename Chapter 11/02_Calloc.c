/*Write a program to create an array of size n using calloc where n is an
integer entered by the user.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the value\n");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}