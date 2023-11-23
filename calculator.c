#include <stdio.h>

int main() {
	char operator = 0;
	float num1 = 0, num2 = 0, result;

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
		if (num2 == 0) {
			printf("You cannot divide by zero!\n");
			return 2;
		}
                result = num1 / num2;
                break;
		default:
		printf("What is this operator does mean?\n");
		return 1;
	}
	printf("The result is: %f\n", result );
return 0;
}
