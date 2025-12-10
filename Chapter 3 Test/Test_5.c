/*
Write a program to find greatest of four numbers entered by the user.
*/
#include <stdio.h>
int main()
{
     int a = 5, b = 56, c = 64, d = 58;
     if (a > b && a > c && a > d)
     {
          printf("the greatest number of all is %d\n", a);
     }
     else if (b > a && b > c && b > d)
     {
          printf("the greatest number of all is %d\n", b);
     }
     else if (c > a && c > b && c > d)
     {
          printf("the greatest number of all is %d\n", c);
     }
     else if (d > a && d > b && d > c)
     {
          printf("the greatest number of all is %d\n", d);
     }
     return 0;
}