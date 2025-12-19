#include <stdio.h>

int main()
{
    char s[4];
    scanf("%3s",&s); 
    /*
     No Multiple words with spaces in Scanf Function while using %s. 
     %3s is used to avoid buffer overflow
     */

    printf("%s",s); // %s is used to print complete string value
    
    return 0;
} 