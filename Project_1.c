/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.

When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.

Hint: Use loop & use a random number generator.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
int main()
{
    int Number_of_guesses = 0;
    int guessed;

    srand(time(0));                        
    int randomnumber = (rand() % 100) + 1; 
    // printf("Random Number: %d\n", randomnumber);

    do
    {
        printf("guess the number\n");
        scanf("%d", &guessed);

        if (guessed > randomnumber)
        {
            printf("enter the lower number\n");
        }
        else if (guessed < randomnumber)
        {
            printf("enter the higher number\n");
        }
        else
        {
            printf("Congratualtions\n");
        }
        Number_of_guesses++;
    } while (guessed != randomnumber);
    printf("your number of guesses is %d\n", Number_of_guesses);
    return 0;
}