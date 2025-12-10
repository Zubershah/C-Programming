#include <stdio.h>

void display(int arr[], int size) //(int *ptr, int size);
{ // array received as parameter
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);   // printf("%d ", *(ptr+i));
    }
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int n = 5;

    display(numbers, n); // passing array to function
    return 0;
}
