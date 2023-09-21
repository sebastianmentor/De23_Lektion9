import java.util.Arrays;

public class PrimeBenchmark {
    public static boolean[] sieveOfEratosthenes(int n) {
        boolean[] primes = new boolean[n + 1];
        Arrays.fill(primes, true);
        primes[0] = primes[1] = false;
        
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (primes[i]) {
                for (int j = i * i; j <= n; j += i) {
                    primes[j] = false;
                }
            }
        }
        return primes;
    }

    public static void main(String[] args) {
        int n = 1000000; // Adjust as needed
        boolean[] primes = sieveOfEratosthenes(n);
        //Print prime numbers, if needed
        
        for (int i = 2; i <= n; i++) {
            if (primes[i]) {
                System.out.println(i);
            }
        }
        
    }
}
