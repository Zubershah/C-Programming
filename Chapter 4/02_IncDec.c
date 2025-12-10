#include <stdio.h>
int main()
{
    int i = 5;
    printf("the value of i is %d\n", i); // 5
    i = i + 5;
    printf("the value of i is %d\n", i); // 10
    // i++; post increment
    // ++i; pre increment
    printf("the value of i is %d\n", i++); // 10
    printf("the value of i is %d\n", i);   // 11
    printf("the value of i is %d\n", ++i); // 12

    int j = 20;
    printf("the value of j is %d\n", j); // 20
    j = j - 5;
    printf("the value of j is %d\n", j); // 15
    // j--; post decrement
    // --j; pre decrement
    printf("the value of j is %d\n", j--); // 15
    printf("the value of j is %d\n", j);   // 14
    printf("the value of j is %d\n", --j); // 13
    return 0;
}