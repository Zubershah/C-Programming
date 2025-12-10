/*Write a program to encrypt a string by adding 1 to the ascii value of its
characters. */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "heyy! what's up";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
        /*
        characters are stored as ASCII values (numbers). 
        Adding 1 to a character actually increases its numerical ASCII value by one.
        */
    }
    printf("%s\n", str);  // Output: ifzz"!xibu(t!vq

    return 0;
}