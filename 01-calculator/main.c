#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int firstNumber, operator, secondNumber;
	int sum, multiply, minus, divide;
	char yesorno;
	bool repeat = true;
	printf("***Welcome to my calculator.***\n");
		
	do {
		printf("Enter First Number: ");
		scanf(" %d", &firstNumber);
	
		printf("Enter Operator: ");
		scanf(" %c", &operator);
	
		printf("Enter Second Number: ");
		scanf(" %d", &secondNumber);
	
	

		if (operator == '*') {
			multiply = firstNumber * secondNumber;
			printf("Result is: %d\n", multiply);
		
		} else if (operator == '+') {
			sum = firstNumber + secondNumber;
			printf("Result is: %d\n", sum);
		
		} else if (operator == '-') {
			minus = firstNumber - secondNumber;
			printf("Result is: %d\n", minus);
			
		} else if (operator == '/') {
			divide = firstNumber / secondNumber;
			printf("Result is: %d\n", divide);
		}
		
		printf("Do you want to continue (y/n):\n");
		scanf(" %c", &yesorno);
		if (yesorno == 'n') {
			repeat = false;
			printf(":) come back again ...");
		}
		if (!repeat) break;
	} while (repeat);
	return 0;
}