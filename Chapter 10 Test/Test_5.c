/*Write a program to modify a file containing an integer to double its value. */
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Text.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);

    ptr = fopen("Text.txt", "a");
    fprintf(ptr, "%d", num * 2);
    fclose(ptr);

    return 0;
}