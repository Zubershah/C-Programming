/*
Write a program to implement Test_3 using ‘for’ and ‘do-while’ loop.
*/
// #include <stdio.h>
// int main()
// {
//     int sum = 0;

//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     printf("the sum of first 10 natural number is %d\n", sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int sum = 0, i = 1;

    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("the sum of first 10 natural number is %d\n", sum);
    return 0;
}