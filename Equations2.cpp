#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>

int main(){

    const long solMod = 1000007;

    long N(0); scanf("%ld", &N);
    bool * primes = new bool[N + 1];

    primes[0] = primes[1] = 0; for(int k = 2; k <= N; k++){primes[k] = 1;}

    for(int k = 2; k <= sqrt(N); k++){
        if(!primes[k]){continue;}
        for(int m = 2 * k; m <= N; m+=k){primes[m] = 0;}
    }

    std::vector<long> primesVector;
    for(int k = 2; k <= N; k++){if(primes[k]){primesVector.push_back(k);}}
    delete[] primes;

    std::vector<long> powers;

    for(long k = 0; k < primesVector.size(); k++){
        long currentPrime = primesVector[k]; 
        long currentSum(0), currentDiv(currentPrime);
        while(currentDiv <= N){currentSum += N/currentDiv; currentDiv *= currentPrime;}
        

        powers.push_back(currentSum);
    }

    long output(1);
    for(long k = 0; k < powers.size(); k++){output *= (2 * powers[k] + 1); output %= solMod;}
    printf("%ld\n", output);

    return 0;
}
