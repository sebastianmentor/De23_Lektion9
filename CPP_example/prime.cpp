#include <iostream>
#include <vector>
#include <cmath>

std::vector<bool> sieveOfEratosthenes(int n) {
    std::vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    
    for (int i = 2; i <= std::sqrt(n); i++) {
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
    std::vector<bool> primes = sieveOfEratosthenes(n);
    // Print prime numbers, if needed
    
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            std::cout << i << std::endl;
        }
    }
    
    return 0;
}
