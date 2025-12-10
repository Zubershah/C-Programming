#include <stdio.h>

int main()
{
    int arr[3][2] = {{1, 2},
                     {3, 4},
                     {5, 5}};
    int i, j;
    printf("enter the value of rows and coulums\n");
    scanf("%d", &i);
    scanf("%d", &j);
    printf("the value of %d row and %d coulumn is %d\n", i, j, arr[i][j]);

    return 0;
}