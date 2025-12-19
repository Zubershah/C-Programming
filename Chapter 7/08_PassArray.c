#include <stdio.h>

void display(int arr[], int size)
// void display(int *ptr, int size)
{
    // array received as parameter
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        // printf("%d ", *ptr); // printf("%d ", *(ptr+i));
        // ptr++;               // no need
    }
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int n = 5;

    display(numbers, n); // passing array to function
    return 0;
}
