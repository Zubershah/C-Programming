/*Write a program to create a dynamic array of 5 floats using malloc().*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;

    ptr = (float *)malloc(n * sizeof(float)); // 20 bytes of memory block is dynamically allocated to ptr

    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}