#include <stdio.h>

int main() {
	int num = 0;
	printf("Enter a new num: \n");
	scanf("%d", &num);

	if (num < 100 || num > 999) {
		printf("Only 3 digit numbers are allowed!");
		return 1;
	}

	int ones = num % 10;
	int tens = (num / 10) % 10;
	int hundreds = num / 100;
	if (hundreds == tens -1 && tens == ones -1) {
		printf("Numbers are ordinal!");
	} else {
		printf("Not ordinal numbers!");
	}

	return 0;
}
