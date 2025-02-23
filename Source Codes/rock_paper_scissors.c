#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char user_choice;
    char choice[10]; 
    printf("----------------Enter your choice---------------\n");
    printf("r for Rock, p for Paper and s for Scissor\n");
    scanf(" %c", &user_choice); 
    if (user_choice != 'r' && user_choice != 'p' && user_choice != 's') {
        printf("\nWrong Entry :(");
        printf("\nPlease try again...\n");
    } else {
        srand(time(NULL));
        int randomNumber = rand() % 3;

        char *choices[] = {"Rock", "Paper", "Scissor"};
        char *computerChoice = choices[randomNumber];

        if (user_choice == 'r') {
            strcpy(choice, "Rock");
        } else if (user_choice == 'p') {
            strcpy(choice, "Paper");
        } else if (user_choice == 's') {
            strcpy(choice, "Scissor");
        }

        printf("You chose: %s\n", choice);
        printf("Computer chose: %s\n", computerChoice);

        if (strcmp(choice, computerChoice) == 0) {
            printf("It's a tie!\n");
        } else if ((strcmp(choice, "Rock") == 0 && strcmp(computerChoice, "Scissor") == 0) ||
                   (strcmp(choice, "Paper") == 0 && strcmp(computerChoice, "Rock") == 0) ||
                   (strcmp(choice, "Scissor") == 0 && strcmp(computerChoice, "Paper") == 0)) {
            printf("You Won! :)\n");
        } else {
            printf("You Lost :(\n");
        }
    }

    return 0;
}
