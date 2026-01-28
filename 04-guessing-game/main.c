
#include <stdio.h>
#include <stdlib.h>

int main() {

	int off = 1;
	
	do {
		printf("***Welcome to Guessing Game...***\n");
		int userGuess;
		int randomNumber = rand() % (10 + 1);
		int notGuess = 1;
		
		while (notGuess == 1) {
			printf(">>> Now Guess The Number: ");
			scanf(" %d", &userGuess);
			int guess = userGuess == randomNumber;
			printf("%d\n", randomNumber);
			if (guess) {
				system("clear");
				printf("Your Guess is Correct...✅\n");
				break;
			}else {
				system("clear");
				printf("Ooops!... Try Again\n");
			}
		}	
	}while (off == 1);
	
	return 0;
}