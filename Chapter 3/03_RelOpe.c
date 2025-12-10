#include <stdio.h>
int main()
{
    int a = 10;

    if (a == 10)
    {
        printf("a is eqal to 10\n"); // Execute
    }
    else
    {
        printf("a is not equal to 10\n");
    }

    if (a >= 2)
    {
        printf("a is greater than or equal to 2\n"); // Execute
    }
    else
    {
        printf("a is not greater than or equal to 2\n");
    }

    if (a <= 2)
    {
        printf("a is less than or equal to 2\n");
    }
    else
    {
        printf("a is not less than or equal to 2\n"); // Execute
    }

    if (a != 10)
    {
        printf("a is not equal to 10\n");
    }
    else
    {
        printf("a is equal to 10"); // Execute
    }
    return 0;
}
