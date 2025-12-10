
#include <stdio.h>

int main()
{
    char s[] = {'a', 'b', 'c', 'd', '\0'};
    // char s[] = "abcd";
    /*Both are same*/

    for (int i = 0; i < 4; i++)
    {
        printf("character is %c\n", s[i]);
    }

    return 0;
}
