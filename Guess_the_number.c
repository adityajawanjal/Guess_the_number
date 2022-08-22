#include <stdio.h>;
#include <stdlib.h>;

int main()
{
    srand(time(0));
    int num, noOfGuesses = 0, rn = rand() % 100 + 1;

    do
    {
        printf("Guess the number  = ");
        scanf("%d", &num);
        noOfGuesses++;

        if (num < rn)
        {
            printf("Think high.\n");
        }
        else if (num > rn)
        {
            printf("Think low.\n");
        }
        else
        {
            printf("You guessed it right.\n");
        }
    } while (num != rn);
    printf("You guessed in %d attempts.", noOfGuesses);

    return 0;
}