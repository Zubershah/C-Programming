#include <stdio.h>
int main()
{
    int i = 72;  // i varaible initialization to 72
    int* j = &i; // j is a pointer the copy the address of i and j is a variable it also has the address itself
    /*another types of pointer char* j or float* j*/

    printf("the address of i is %p\n", &i); // the address of i is printed the 72 is stored

    printf("the address of j is %p\n", &j); // the address of j is printed that address of i is stored

    printf("the value at address j is %d\n", *j); // the 72 is printed the value stored in address j

    printf("the address value stored in j is %p\n", j); // the address value stored in j
    return 0;
}
