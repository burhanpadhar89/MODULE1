#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 10  // Set the maximum number of attempts

int main() {
    int target, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    target = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have generated a random number between 1 and 100.\n");
    printf("You have %d attempts to guess the number.\n", MAX_ATTEMPTS);

    // Game loop for guessing
    while (attempts < MAX_ATTEMPTS) {
        printf("\nAttempt %d of %d: Enter your guess: ", attempts + 1, MAX_ATTEMPTS);
        scanf("%d", &guess);
        
        attempts++;

        // Check if the guessed number is correct
        if (guess == target) {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", target, attempts);
            break;
        }
        // Provide hints if the guess is too high or too low
        else if (guess < target) {
            printf("Too low! Try a higher number.\n");
        }
        else {
            printf("Too high! Try a lower number.\n");
        }
        
        // If the user has exhausted all attempts
        if (attempts == MAX_ATTEMPTS) {
            printf("\nSorry, you've used all your attempts. The correct number was %d.\n", target);
        }
    }

    return 0;
}
