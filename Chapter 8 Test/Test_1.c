/*
Which of the following is used to appropriately read a multi-word string.
1. gets()  
2. puts()
3. printf() 
4. scanf()
*/
#include <stdio.h>

int main()
{
    char s[10];
    gets(s);
    printf("%s\n", s);

    return 0;
}