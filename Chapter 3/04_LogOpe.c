#include <stdio.h>
int main()
{
    int a = 0, b = 1;
    // 0 --> False; =>1 --> True
    printf("tha value of a and b in AND Operation is %d\n", a && b); // 0
    printf("tha value of a and b in OR Operation is %d\n", a || b);  // 1
    printf("tha value of a in NOT Operation is %d\n", !a);           // 1
    return 0;
}
