/*Write a program to check whether a given character is present in a string or not. */
#include <stdio.h>
#include <string.h>

int main()
{
    char Test = 'o';
    int contain = 0;
    char str[] = "zooby";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == Test)
        {
            contain = 1;
            break;
            ;
        }
    }
    if (contain)
    {
        printf("Yes it Contain's\n");
    }
    else
    {
        printf("Does not contain\n");
    }

    return 0;
}