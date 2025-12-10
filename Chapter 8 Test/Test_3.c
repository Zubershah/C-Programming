/*Write your own version of strlen function from <string.h> */
#include <stdio.h>

int strlen(char str[])
{
    char c = str[0];
    int i = 0;
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    return i - 1;
}
int main()
{
    char s[] = "Zooby";
    printf("%d\n",strlen(s));

    return 0;
}