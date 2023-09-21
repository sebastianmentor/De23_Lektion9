object PrimeBenchmark extends App {
    def sieveOfEratosthenes(n: Int): Array[Boolean] = {
        val primes = Array.fill(n + 1)(true)
        primes(0) = false
        primes(1) = false
        
        for (i <- 2 to math.sqrt(n).toInt if primes(i)) {
            for (j <- i * i to n by i) {
                primes(j) = false
            }
        }
        primes
    }

    val n = 1000000  // Adjust as needed
    val primes = sieveOfEratosthenes(n)
    // Print prime numbers, if needed
    primes.zipWithIndex.filter(_._1).map(_._2).foreach(println)
}
