#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int arr[] = {3, 4, 7, 11, 15, 17, 20, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Prime numbers in the array are:\n");

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
