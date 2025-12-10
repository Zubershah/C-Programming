#include <stdio.h>
int main()
{
    int CGPA[3] = {7, 8, 9}; //  int CGPA[] = {7, 8, 9}; Valid

    for (int i = 0; i < 3; i++)
    {
        printf("the CGPA of index %d is %d\n", i, CGPA[i]);
    }
    return 0;
}