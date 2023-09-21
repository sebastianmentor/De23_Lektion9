#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool* sieveOfEratosthenes(int n) {
    bool* primes = malloc((n + 1) * sizeof(bool));
    for (int i = 0; i <= n; i++) primes[i] = true;
    primes[0] = primes[1] = false;
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    int n = 1000000;  // Adjust as needed
    bool* primes = sieveOfEratosthenes(n);
    // Print prime numbers, if needed

    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            printf("%d\n", i);
        }
    }
}