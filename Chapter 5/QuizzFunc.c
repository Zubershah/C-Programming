/*
Quick Quiz: Write a program with three functions
1. good morning function which prints “good morning”.
2. good afternoon function which prints “good afternoon”.
3. good night function which prints “good night”.
main() should call all of these in order 1→2→3 
*/
#include <stdio.h>
void GM();
void GA();
void GN();
int main()
{
   GM();
   GA();
   GN();
    return 0;
}
void GM()
{
    printf("good morning\n");
}
void GA()
{
    printf("good afternoon\n");
}
void GN()
{
    printf("good night\n");
}
