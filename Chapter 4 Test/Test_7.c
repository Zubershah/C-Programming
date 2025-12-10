/*
Write a program to check whether a given number is prime or not using loops.
*/
// #include <stdio.h>
// int main()
// {
//     int n = 6, prime = 0, i = 2;

//     if (n <= 1)
//     {
//         prime = 1;
//     }
//     else
//     {
//         do
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 prime = 1;
//                 break;
//             }
//             i++;
//         } while (i < n);
//     }

//     if (prime)
//     {
//         printf("the number %d is not a prime\n", n);
//     }
//     else
//     {
//         printf("the number %d is a prime\n", n);
//     }
//     return 0;
// }

/*While loop*/
#include <stdio.h>
int main()
{
    int n = 7, prime = 0, i = 2;

    if (n <= 1)
    {
        prime = 1;
    }
    else
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                prime = 1;
                break;
            }
            i++;
        }
    }

    if (prime)
    {
        printf("the number %d is not a prime\n", n);
    }
    else
    {
        printf("the number %d is a prime\n", n);
    }
    return 0;
}

/*For Loop*/
// #include <stdio.h>
// int main()
// {
//     int n = 7;
//     int prime = 0;

//     if (n <= 1)
//     {
//         prime = 1;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 prime = 1;
//                 break;
//             }
//         }
//     }

//     if (prime)
//     {
//         printf("%d is not a prime\n", n);
//     }
//     else
//     {
//         printf("%d is a prime\n", n);
//     }
//     return 0;
// }
