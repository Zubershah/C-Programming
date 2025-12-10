#include <stdio.h>
int sum(int, int);    // function prototype take 2 integer value and return 1 integer value (result) to sum
int sum(int x, int y) // function definition contain the set of instructions(what the function will do exactly)
{
    printf("the sum is %d\n", x + y);
    return x + y;
}
/*function definitiopn can also be written after the main program
another type function say:
void display(); // void means return no value and display is function name*/
int main()
{
    int a = 56, b = 64;
    sum(a, b); // int c = a + b;    // printf("the sum is %d\n", c);
    /*output: the sum is 120*/

    // int a1 = 5, b1 = 4;
    sum(5, 4); // int c1 = a1 + b1;   // printf("the sum is %d\n", c1);
    /*output: the sum is 9*/

    int c = sum(23, 50); // function call (telling to return the sum value to c ) also called Call by value
    printf("%d\n", c);
    /*output: 73*/
    return 0;
}
