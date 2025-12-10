/* Create an array of 5 complex numbers created in Test 4 and display them
with the help of a display function. The values must be taken as an input from
the user*/
#include <stdio.h>
typedef struct complex
{
    int i;
    float j;
} C;
void display(C);
void display(C x)
{
    printf("the value of complex numbers are %d +- %fj \n", x.i, x.j);
}

int main()
{
    C v[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real numbers\n");
        scanf("%d", &v[i].i);
        printf("enter the imaginary numbers\n");
        scanf("%f", &v[i].j);
    }
    for (int i = 0; i < 5; i++)
    {
        display(v[i]);
    }

    return 0;
}