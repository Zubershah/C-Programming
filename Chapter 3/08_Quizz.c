/*
91 - 100 => A
81 - 90 => B
71 - 80 => C
61 - 70 => D
51 - 60 => E
00 - 50 => F
*/
#include <stdio.h>
int main()
{
    char grade;
    int marks = 50;

    if (marks >= 91 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks >= 81 && marks <= 90)
    {
        grade = 'B';
    }
    else if (marks >= 71 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks >= 61 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks >= 51 && marks <= 60)
    {
        grade = 'E';
    }
    else if (marks > 100)
    {
        printf("enter the correct marks\n");
    }
    else
    {
        grade = 'F';
    }
    printf("%c", grade);
    return 0;
}