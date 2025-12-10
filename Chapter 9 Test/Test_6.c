/*Write a structure capable of storing date. Write a function to compare those
dates. */
#include <stdio.h>

typedef struct date
{
    int dd, mm, yyyy;
}check;

int compare(check x, check y)
{
    if (x.dd == y.dd && x.mm == y.mm && x.yyyy == y.yyyy)
    {
        return 0;
    }

    if (x.yyyy > y.yyyy)
    {
        return 1;
    }
    else if (y.yyyy > x.yyyy)
    {
        return -1;
    }
    else if (x.mm > y.mm)
    {
        return 1;
    }
    else if (y.mm > x.mm)
    {
        return -1;
    }
    else if (x.dd > y.dd)
    {
        return 1;
    }
    else if (y.dd > x.dd)
    {
        return -1;
    }
}

int main()
{

    check d1 = {11, 02, 2001}; // 1
    check d2 = {14, 02, 2001}; // -1

    printf("%d\n", compare(d1, d2));

    return 0;
}