/*
Explain step by step evaluation of 3 * x / y – z + k * 5 
where x=2, y=3, z=3, k=1
*/
#include <stdio.h>
int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    float e = 3 * x / y - z + k * 5;
    printf("the value of e %f", e); // 4
    return 0;
}