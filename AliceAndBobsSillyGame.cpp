#include <cstdio>
#include <vector>
#include <algorithm>

std::vector<bool> getPrimes(long B){
    
    std::vector<bool> isPrime(B, 1);
    isPrime[0] = isPrime[1] = 0;
    for(long p = 2; p * p <= B; p++){
        if(!isPrime[p]){continue;}
        for(long q = 2 * p; q < B; q += p){isPrime[q] = 0;}
    }
    return isPrime;
}

std::vector<long> countPrimes(long B){
    
    std::vector<bool> bp = getPrimes(B);
    std::vector<long> count(B, 0);
    for(long p = 1; p < B; p++){count[p] = count[p - 1] + bp[p];}
    return count;
}


int main() {
    
    const long N = 100100;
    std::vector<long> primeCount = countPrimes(N);
    long g; scanf("%ld", &g);
    while(g--){
        long n; scanf("%ld", &n);
        puts((primeCount[n] % 2) ? "Alice" : "Bob");
    }
    
    return 0;
}
