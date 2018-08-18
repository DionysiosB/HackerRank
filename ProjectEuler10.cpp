#include <cstdio>
#include <iostream>
#include <vector>


int main(){

    const long N = 1e6 + 1;
    std::vector<bool> primes(N + 1, 1);
    primes[0] = primes[1] = 0;
    for(long p = 2; p * p <= N; p++){
        if(!primes[p]){continue;}
        for(long q = 2 * p; q <= N; q += p){primes[q] = 0;}
    }

    std::vector<int64_t> primeSum(N + 1, 0);
    int64_t current(0);
    for(long p = 2; p <= N; p++){
        if(primes[p]){current += p;}
        primeSum[p] = current;
    }

    long t; scanf("%ld", &t);
    while(t--){long n; scanf("%ld", &n); printf("%lld\n", primeSum[n]);}

    return 0;
}
