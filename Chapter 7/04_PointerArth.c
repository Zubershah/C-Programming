#include <stdio.h>
int main()
{
    int a = 5;
    int* ptr = &a;
    printf("the address of a is %u\n", &a);
    printf("the address stored in ptr is %u\n", ptr);
    ptr++; // increment by architecture byte;
    printf("the address of ptr is %u\n", ptr);
    
    // char b = 'z';
    // char* ptr = &b;
    // printf("the address of b is %u\n", &b);
    // printf("the address stored in ptr is %u\n", ptr);
    // ptr++; // increment by architecture byte;
    // printf("the address of ptr is %u\n", ptr);
    return 0;
}