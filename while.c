#include <stdio.h>

int main() {
	int num = 0, evenNums = 0;
	printf("Enter a number: \n");
	scanf("%d", &num);
	while(num % 2 == 0) {
		evenNums++;
		printf("You entered %d even nums! Enter another: \n", evenNums);
		scanf("%d", &num);
	}
	printf("You entered an ODD number!\n");
	return 0;
}
