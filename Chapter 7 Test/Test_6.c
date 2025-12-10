/*Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively. */
// #include <stdio.h>

// int main()
// {
//     int arr[3][10];
//     int mul[] = {2, 7, 9};

//     for (int i = 0; i < 3; i++)
//     {

//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j] = mul[i] * (j + 1);
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*Repeat problem  for a custom input given by the user. */

#include <stdio.h>

int main()
{
    int arr[3][10];

    /*
    int n1, n2, n3;
    printf("enter the 3 values\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    int mul[] = {n1, n2, n3};
    */

    for (int i = 0; i < 3; i++)
    {
        int n;                             //
        printf("enter the input\n");      //
        scanf("%d", &n);                  //

        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = (n * (j + 1));   // arr[i][j] =  mul[i]* (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}