#include <stdio.h>

int main() {
	
	int number;
	char off;
	
	do {
		printf("Is Number Even/Odd Enter it: ");
		scanf("%d", &number);
		/* Turn OFF the System */
	
		/* Check Odd/Even */
		if (number % 2 == 0) {
			  printf("Your Number is Even.\n");
		} else {
			printf("Your Number is Odd.\n");
		}
		
		off = getchar();
		if (off == 'n') printf("System is Turn off...\n");
		
	} while (off != 'n');
	
	
	return 0;
}