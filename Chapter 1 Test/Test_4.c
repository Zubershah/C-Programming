/*
Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/
#include <stdio.h>
int main()
{
    // celsius to fahrenheit formula is F = ((9/5) * C) +32
    float C = 38.0, F;
    F = ((9.0 / 5.0) * C) + 32;
    printf("The value of Fahrenheit converted from Celsius is %f", F);
    return 0;
}