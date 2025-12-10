/*
Write a program to print ‘n’ natural numbers in reverse order.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the desired natural number\n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        printf("the value of i is %d\n", i);
    }
    return 0;
}
