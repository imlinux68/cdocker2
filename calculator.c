#include <stdio.h>

int main() {
	char operator = 0;
	float num1 = 0, num2 = 0;

	printf("Enter a 1st number:\n");
	scanf("%f", &num1);
        printf("Enter a 2nd number:\n");
        scanf("%f", &num2);
        printf("choose operator:\n");
        scanf(" %c", &operator);

	switch (operator) {
		case '+':
		result = num1 + num2;
		break;
                case '-':
                result = num1 - num2;
                break;
                case '*':
                result = num1 * num2;
                break;
                case '/':
                result = num1 / num2;
                break;
		default:
		printf("What is this operator does mean?\n");
		return 1;


return 0;
}
