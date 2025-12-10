#include <stdio.h>

int main()
{
    /*fgetc is used only in read mode*/
    FILE *ptr;
    ptr = fopen("ZS.txt", "r");
    char c = fgetc(ptr);
    printf("%c\n", c);

    /*fptc is used in write mode*/
    // FILE *ptr;
    // ptr = fopen("ZS.txt", "a");
    // fputc('c', ptr);

    return 0;
}