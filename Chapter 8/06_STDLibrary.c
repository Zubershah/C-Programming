#include <stdio.h>
#include <string.h> // string library function

int main()
{
    char s[] = "Zooby";
    printf("%d\n", strlen(s));
    /*strlen() is used to count the characters in string s*/

    char Receive[30];
    strcpy(Receive, s);
    /*strcpy() is used to copy the string from s into Receive*/
    printf("%s\n", Receive);
    printf("%s\n", s);

    char a1[56] = "Zuber";
    char a2[56] = "Shah";
    strcat(a1, a2);
    /*strcat() is used to add a2 string in a1*/
    printf("%s\n", a1); 
    printf("%s\n", a2);
    
    return 0;
}
