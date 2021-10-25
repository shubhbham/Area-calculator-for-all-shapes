#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is %d", number);
    do
    {
        printf("guess the no between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower no please\n");
        }
        else if (guess < number)
        {
            printf("Higher no please\n");
        }
        else
        {
            printf("you guessed in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    if(nguesses<=5){
        printf("\t excellent!!\n");
    }
    else if(nguesses>=10){
        printf("\tGOOD!!\n");
    }
    else{
        printf("\t NOT SO GOOD!!\n");
    }
    
    return 0;
}