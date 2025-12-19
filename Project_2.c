/*
Rock, paper, scissors is a game most of us have played during
school time.
Write a C program..
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    do
    {
        int player, computer;

        srand(time(0));
        computer = (rand() % 3) + 0;

        printf("choose 0 for rock, 1 for paper, and 2 for scissors\n");
        scanf("%d", &player);
        printf("computer choose %d\n", computer);

        if (player == 0 && computer == 0)
        {
            printf("it's draw retry\n"); // 0 Rock
        }
        else if (player == 0 && computer == 1)
        {
            printf("computer win\n"); // 0 Rock; 1 paper
        }
        else if (player == 0 && computer == 2)
        {
            printf("player win\n"); // 0 Rock; 2 Scissors
        }
        else if (player == 1 && computer == 0)
        {
            printf("player win\n"); //  1 paper; 0 Rock
        }
        else if (player == 1 && computer == 1)
        {
            printf("it's draw retry\n"); // 1 paper
        }
        else if (player == 1 && computer == 2)
        {
            printf("computer win\n"); // 1 paper; 2 Scissors
        }
        else if (player == 2 && computer == 0)
        {
            printf("computer win\n"); //  2 Scissors; 0 Rock
        }
        else if (player == 2 && computer == 1)
        {
            printf("player win\n"); // 2 Scissors; 1 paper
        }
        else if (player == 2 && computer == 2)
        {
            printf("it's draw retry\n"); // 2 Scissors
        }

        printf("\n");
    } while (1);

    return 0;
}