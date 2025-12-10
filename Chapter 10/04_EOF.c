#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("ZS.txt", "r");
    while (1)
    {
        ch = fgetc(ptr); // first character  of file is assigned to ch
        printf("%c", ch);

        if (ch == EOF) // EOF is the end of file
        {
            break;
        }
    }

    return 0;
}