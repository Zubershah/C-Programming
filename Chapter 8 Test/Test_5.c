/*Write a program to decrypt the string encrypted using encrypt function in 
Test_4. */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "ifzz\"!xibu(t!vq";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1; 
        
    }
    printf("%s\n", str); //Output: heyy! what's up

    return 0;
}