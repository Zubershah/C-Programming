/*
Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?
*/
#include <stdio.h>
int func(int*);
int func(int* x)
{
    printf("the address of i variable passed to a function is %p\n", &x);
}
int main()
{
    int i = 5;

    printf("the address of i is %p\n", &i);
    func(&i);
    return 0;
}
