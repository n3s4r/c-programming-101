#include <stdio.h>
#include <stdlib.h>

//Guessing a Number

int main()
{

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int guessOut = 0;

    while(guess != secretNumber && guessOut == 0)
    {
        if(guessCount < guessLimit)
        {
            printf("Enter a number to guess: ");
            scanf("%d", &guess);
            guessCount++;
        }
        else
        {
            guessOut = 1;
        }
    }
    if(guessOut == 1)
    {
        printf("\nOut of guesses");
    }
    else
    {
        printf("\nYou win!");
    }

    return 0;
}
