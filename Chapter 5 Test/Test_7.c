/*
Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
(2i-1) mathematical formula to print the star in n line ;
where i = n
 */
#include <stdio.h>
int main()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}