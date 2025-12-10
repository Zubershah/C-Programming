/*Modify the program 1  to check whether the file exists or not before 
opening the file*/

#include <stdio.h>

int main()
{
    FILE *ptr;                     
    ptr = fopen("Zooby.txt", "r"); 
    /*here zooby file does not exist*/

    if (ptr == NULL)  // NULL is a Pointer 
    {
        printf("the file does not exist sorry\n");  // execute
    }

    else
    {
        int num;

        fscanf(ptr, "%d", &num);                 
        printf("the value of num is %d\n", num); 

        fscanf(ptr, "%d", &num);                 
        printf("the value of num is %d\n", num); 
    }
    return 0;
}