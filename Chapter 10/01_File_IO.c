#include <stdio.h>

int main()
{
    FILE *ptr;                  // File pointer
    ptr = fopen("ZS.txt", "r"); // reading the file (i.e. ZS.txt)
    int num;

    fscanf(ptr, "%d", &num);                 // whatever integer value is readed by ptr is stored in num variable
    printf("the value of num is %d\n", num); // 123

    fscanf(ptr, "%d", &num);                 // ptr move to next integer value
    printf("the value of num is %d\n", num); // 456

    fclose(ptr); // closing the file

    return 0;
}