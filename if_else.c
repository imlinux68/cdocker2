#include <stdio.h>

int main() {
  int number = 0;
  printf("Enter a number: ");
  scanf("%d", &number);

if (number % 2 == 0) {
    printf("your number is even!\n");
} else if (number >= 10) {
    printf("Your number is ODD and greater than 10!\n");
} else {
    printf("Your number is ODD and less or equal to 10!");
}
  return 0;
}
