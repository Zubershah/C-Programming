/*Write a program to demonstrate the usage of free() with malloc().*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;

    ptr = (float *)malloc(n * sizeof(float)); // 20 bytes of memory block is dynamically allocated to ptr

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    free(ptr);  // free() is used to prevent your program from running out of RAM.

    return 0;
}