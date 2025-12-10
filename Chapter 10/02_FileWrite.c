#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("ZS.txt", "w");  // write mode first erase the file and write to overcome this append is used
    ptr = fopen("ZS.txt", "a"); // append keep the file content as it is and write the 56 value
    int num = 56;

    fprintf(ptr, "%d", num);
    fclose(ptr);

    return 0;
}