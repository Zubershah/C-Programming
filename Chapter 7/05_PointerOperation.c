/*
1. Addition of a number to a pointer.
2. Subtraction of a number from a pointer.
3. Subtraction of one pointer from another.
4. Comparison of two pointer variables. 
*/

// #include <stdio.h>

// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     printf("the address of a is %u\n", &a);
//     printf("the address stored inptr is %u\n", ptr);
//     // ptr += 5; // Add the Bytes as per Architecture
//     // ptr -= 5; // Subtract the Bytes as per Architecture
//     printf("the address of ptr is %u\n", ptr);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     int *p1 = &arr[0]; // points to 10
//     int *p2 = &arr[4]; // points to 50
//     printf("the p1 is %u\n", p1);
//     printf("the p2 is %u\n", p2);
//     int diff = p2 - p1; // difference in array index positions
//     printf("Difference = %d\n", diff); // Output: 4 bytes 

//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *a = &arr[0]; // address of 10
    int *b = &arr[3]; // address of 40
    printf("the a is %u\n", a);
    printf("the b is %u\n", b);

    if (a < b)
    {
        printf("'a' points to a lower memory location than 'b'\n");
    }

    if (a != b)
    {
        printf("Pointers 'a' and 'b' are not equal\n");
    }

    return 0;
}
