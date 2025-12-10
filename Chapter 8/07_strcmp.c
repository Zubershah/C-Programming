#include <stdio.h>
#include <string.h>

int main()
{
    char Cool[] = "Zooby";
    char Bad[] = "shah";

    int a = strcmp(Cool, Bad);
    /*
    stcmp() is used to compare the two string
    return 0 if identical
    return 1 if Cool string is Greater than Bad string
    return -1 if Bad string is Greater than Cool string
    
    here == is not applicable as it is an array.
    The array name decays into a pointer.
    The pointer holds the array's starting memory address.
    Therefore, array1 == array2 compares the memory addresses, not the contents.
    */
    printf("%d\n", a);

    return 0;
}
