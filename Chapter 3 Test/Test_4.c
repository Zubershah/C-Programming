/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("the character is lower case\n");
    }
    else
    {
        printf("the character is not lower case\n");
    }
    printf("the value of character entered is %d\n", ch);
    return 0;
}
