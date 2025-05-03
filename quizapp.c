#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {
        "1. What is the name of Alaa's cat?", 
        "2. How old are Alaa's cats?", 
        "3. How long has Alaa had a cat?"
    };

    char options[][100] = {
        "A. Lula", "B. Barbie", "C. Keta", "D. Chooca",
        "A. 7", "B. 8", "C. 2", "D. 4",
        "A. 1 year", "B. 3 years", "C. 5 years", "D. 2 years"
    };

    char answers[3] = {'A', 'B', 'B'}; // Correct answers
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    printf("Welcome to the Quiz Game!\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("\n************\n");
        printf("%s\n", questions[i]);
        printf("************\n");

        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i * 4 + j]); 
        }

        printf("Your guess: ");
        scanf(" %c", &guess);  // Space before %c to handle newline issue
        guess = toupper(guess); // Convert to uppercase for case insensitivity

    if(guess == answers[i]){
        printf("CORRECT");
        score++;
    }
    else {
        printf("WRONG!\n");
    }

    }
    printf("\n************\n");
    printf("Final SCORE: %d/%d\n", score, numberOfQuestions);
    printf("\n************\n");

    return 0;
}