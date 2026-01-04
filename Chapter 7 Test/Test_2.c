/*
If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i). True
(ii). False
(iii). Depends
*/
#include <stdio.h>

int main()
{
    int s[3] = {1, 2, 3};
    printf("the value is %d\n", *(s + 3)); // false
    return 0;
}