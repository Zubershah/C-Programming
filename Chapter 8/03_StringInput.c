#include <stdio.h>

int main()
{
    char s[4];
    scanf("%3s",&s); 
    /*
     No Multiple words with spaces in Scanf Function while using %s. 
     in between %s 3 is used to avoid buffer overflow
     */

    printf("%s",s); // %s is used to print complete string value
    
    return 0;
} 