#include <stdio.h>
int factorial(int num) {
int fact = 1;
for (int i = 1; i <= num; ++i) {
fact =fact* i;
}
return fact;
}
int isStrongNumber(int num) {
int originalNum = num;
int sum = 0;
while (num > 0) {
int rem = num % 10;
sum =sum + factorial(rem);
num=num/ 10; }
return (sum == originalNum); }
int main() {
int number;
printf("Enter a number: ");
scanf("%d", &number);
if (isStrongNumber(number)) {
printf("%d is a strong number.\n", number);
} else {
printf("%d is not a strong number.\n", number);
}
}
