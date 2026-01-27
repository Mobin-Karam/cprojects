#include <stdio.h>

int main() {
	
	int number;
	int fact = 1;
	char off = 'n';
	
	do {
		fact = 1;
		printf("\nMake Factorial of Number: ");
		scanf("%d", &number);
	
		if (number == 0) {
			printf("Factorial of your number is: %d \n", fact);
		} else {
			for (int i=1;i<=number;i++) {
				fact *= i;
			}
			printf("Factorial of your number is: %d \n", fact);
		}
		number = 0;
		off = getchar();
		if (off == 'n') printf("Bye Bye :) ...");
	} while (off != 'n');
	
	return 0;
}