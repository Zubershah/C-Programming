/*
Write a program to calculate the factorial of a given number using a for loop.
*/
// #include <stdio.h>
// int main()
// {
//     int n, product = 1;
//     printf("enter the number\n");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         product *= i;
//     }
//     printf("the factorial of %d is %d", n, product);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, product = 1, i = 1;
    printf("enter the number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("the factorial of %d is %d", n, product);
    return 0;
}