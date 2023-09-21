def sieve_of_eratosthenes(n):
    primes = [True] * (n + 1)
    primes[0], primes[1] = False, False
    for i in range(2, int(n**0.5) + 1):
        if primes[i]:
            for j in range(i*i, n + 1, i):
                primes[j] = False
    return primes

n = 1000000  # Adjust as needed
primes = sieve_of_eratosthenes(n)
# Print prime numbers, if needed
for i, prime in enumerate(primes):
    if prime:
        print(i)
