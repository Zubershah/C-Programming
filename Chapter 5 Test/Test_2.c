/*
Write a function to convert Celsius temperature into Fahrenheit.
*/
#include <stdio.h>
float Fahrenheit(float);
float Fahrenheit(float x)
{
    float Fah = (x * 1.8) + 32;
    return Fah;
}
int main()
{
    float Cel = 45;

    printf("the fahrenheit value is %f\n", Fahrenheit(Cel));
    return 0;
}
