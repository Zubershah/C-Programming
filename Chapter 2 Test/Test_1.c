/*
Write a program to check whether a number is divisible by 97 or not.
*/
#include <stdio.h>
int main()
{
    int a = 17460; // Divisible number
    int b = 182;   // Not divisible number
    int c = a % 97, e = b % 97;

    printf("whether the number %d is divisible by %d\n", a, c); // YES 
    printf("whether the number %d is divisible by %d\n", b, e); // NO 
    return 0;
}