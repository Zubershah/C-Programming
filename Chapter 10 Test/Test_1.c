/*Write a program to read three integers from a file*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Text.txt", "r");
    int num[3];
    fscanf(ptr, "%d %d %d", &num[0], &num[1], &num[2]);
    printf("%d %d %d\n", num[0], num[1], num[2]);
    fclose(ptr);
    return 0;
}