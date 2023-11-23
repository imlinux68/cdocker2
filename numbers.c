#include <stdio.h>

int main() {
	int num = 0;
	printf("Enter a new num: \n");
	scanf("%d", &num);
	
	if (num < 100 || num > 999) {
		printf("Only 3 digit numbers are allowed!");
		return 1;
	}
	

	return 0;
}
