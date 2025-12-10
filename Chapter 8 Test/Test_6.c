/*Write a program to count the occurrence of a given character in a string.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char Test = 'o';
    int count = 0;
    char str[] = "zooby shah";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == Test)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
};