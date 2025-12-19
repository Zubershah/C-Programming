/*Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal. */
#include <stdio.h>

int main()
{
    char a[6];
    // scanf("%5s", a); // fgets(a, sizeof(a), stdin);
    // printf("%s\n", a);

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
        fflush(stdin); // clear the input buffer (ENTER  i.e. \n )
    }
    a[5] = '\0';
    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}