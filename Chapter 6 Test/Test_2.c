/*
Write a program to change the value of a variable to ten times of its current
value.
*/
// #include <stdio.h>
// void CHANGE(int*);
// void CHANGE(int* x)
// {
//     *x = *x * 10; // *x *= 10;
// }
// int main()
// {
//     int i = 23;

//     printf("the value of i is %d\n", i);
//     CHANGE(&i);
//     printf("the value of i is %d\n", i);
//     return 0;
// }

/*
Try problem using call by value and verify that it does not change the value of the said variable. 
*/
#include <stdio.h>
int CHANGE(int);
int CHANGE(int x)
{
    return x * 10;
}
int main()
{
    int i = 23;

    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", CHANGE(i));
    printf("the value of i is %d\n", i);
    return 0;
}
