#include <stdio.h>
int perfect(int number) {
int sum = 0;
for (int i = 1; i <= number / 2; i++) {
if (number % i == 0) {
sum =sum+ i;
}
}
return (sum == number);
}
int main() {
int number;
printf("Enter a number: ");
scanf("%d", &number);
if (perfect(number)) {
printf("%d is a perfect number.\n", number);
} else {
printf("%d is not a perfect number.\n", number);
}
return 0;
}
