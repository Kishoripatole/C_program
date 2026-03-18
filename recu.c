
#include <stdio.h>

int prime(int n);

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (prime(n)) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }
    return 0;
}

int prime(int n) {
    int i;

    if (n <= 1) return 0;   // 0 and 1 are not prime
    if (n == 2) return 1;   // 2 is prime

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;       // found a divisor, not prime
    }
    return 1;               // no divisor found, prime
}



