#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int r = rand() % 10 + 1;
    int correct = 0; 
    int guess; 
    int counter = 0; 

    printf("Guess my number! "); 

printf("this is modified by me");//modified by spabba1
printf("this is modificatfed by robin ");//user Robin01aug
    do {
        scanf("%d", &guess);
        if (guess == r) {
            counter++;
	    printf("this is modified");//basic print statement for changes
            printf("You guessed correctly in %d tries! Congratulations!\n", counter);//its gives correct guess
            correct = 1; 
        }

        if (guess < r) {
            counter++;
            printf("Your guess is too low. Guess again. ");
        }

        if (guess > r) { 
            counter++; 
            printf("Your guess is too high. Guess again. ");
        }
    } while (correct == 0);

    return 0;
} 
