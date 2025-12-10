#include <stdio.h>

int main()
{
    char s[11];
    // gets(s); // used to enter the string and stored in s
             /*
             gets() does not know the size of array, will cause a buffer overflow
             The standard, safe, and modern replacement for gets() is fgets().
             */
    fgets(s, sizeof(s), stdin);
    printf("%s\n", s);
    puts(s); // print the string and places the cursor to next line
    printf("heyy\n");

    return 0;
}