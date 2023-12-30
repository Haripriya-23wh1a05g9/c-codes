#include <stdio.h>
int isPrime(int num) {
if (num < 2) {
return 0;
}
for (int i = 2; i * i <= num; i++) {
if (num % i == 0) {
return 0;
} }
return 1;
}
int linearSearchForFirstPrime(int arr[], int size) {
for (int i = 0; i < size; i++) {
if (isPrime(arr[i])) {
return arr[i];
}}
return 0; }
int main() {
int size;
printf("Enter the size of the array: ");
scanf("%d", &size);
int numbers[size];
printf("Enter %d numbers:\n", size);
for (int i = 0; i < size; i++) {
scanf("%d", &numbers[i]); }
int result = linearSearchForFirstPrime(numbers, size);
if (result != -1) {
printf("The first prime number found in the array is: %d\n", result);
} else {
printf("No prime number found in the array.\n");
}
}
