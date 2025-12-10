/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/
#include <stdio.h>
int main()
{
    int income;
    float tax;
    printf("enter income:\n");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (0.05 * (income - 250000));
    }
    else if (income <= 1000000)
    {
        tax = (0.2 * (income - 500000)) + 12500;
    }
    else if (income > 1000000)
    {
        tax = (0.3 * (income - 1000000)) + 12500 + 100000;
    }
    printf("income tax paid by employee to government is %0.2f", tax); //%0.2f is 2 fraction number
    return 0;
}
