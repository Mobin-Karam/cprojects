#include <stdio.h>

int main() {
	
	
	int go = 1;
	
	while (go == 1) {
		char tempUnit;
		int fahr,cels;
		printf("Type F for fahrenhit and C for celsius: \n");
		scanf(" %c", &tempUnit);
		int converter (char unit,int deg) {
			int output;
			if (unit == 'C' || unit == 'c') {
				output = (deg * 9/5) + 32;
			} else if (unit == 'F' || unit == 'f') {
				output = (deg - 32) * 5 / 9;
			}
			return output;
		}
		if (tempUnit == 'F' || tempUnit == 'f') {
			printf("Enter your Fahrenhit Degree to Convert to Celsius: \n");
			scanf(" %d", &fahr);
			printf("F is: %d\n", converter(tempUnit, fahr));
		} else if (tempUnit == 'C' || tempUnit == 'c') {
			printf("Enter your Celsius Degree to Convert to Fahrenhit: \n");
			scanf(" %d", &cels);
			printf("C is: %d\n", converter(tempUnit, cels));
		}
	}
	return 0;
}