/*Write a program containing functions which counts the number of positive
integers in an array. */

#include <stdio.h>

int Test(int a[], int n)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            pos++;
        }
    }
    return pos;
}

int main()
{
    int arr[10] = {1, 2, -3, 4, -5, 0.6, -0.7, 8, 9};
    printf("the number of positive integer are %d\n", Test(arr, 10));

    return 0;
}
