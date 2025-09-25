#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

    srand(time(NULL));

int numberChoice;
int guessNumber;
int randNumber;
int numberAttemps;
while(1){
printf("===== Number Guessing Game =====\n");
printf("1. Start Game\n");
printf("2. Game Instruction\n");
printf("3. Exit\n");

printf("Enter your choice: ");
scanf("%d", &numberChoice);

switch (numberChoice){
    case 1:
    randNumber = rand() % 100 + 1;
    numberAttemps = 0;

    while(1){
    printf("Guess the number (1 - 100): ");
    scanf("%d", &guessNumber);
    numberAttemps++;

    if(guessNumber > randNumber){
        printf("Too High!\n");
    } else if( guessNumber < randNumber){
        printf("Too Low!\n");
    }else{
        printf("Correct! You guesses it in %d attempts.\n\n", numberAttemps);
        break;
    }
    
  }
break; 

    case 2:
    printf("\nInstruction: \n");
    printf(" * The computer picks a random number (1 - 100).\n");
    printf(" * You try to guess the number.\n");
    printf(" * The game tells you if your guess is too low or too high.\n");
    printf(" * Keep guessing until you get it right!\n");
    break;

    case 3:
    printf("Exiting the game... Goodbye!\n");
    return 0;

    default:
    printf("Invalid choice. Try again!");
    break;
      }

    }
}