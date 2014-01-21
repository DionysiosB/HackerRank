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

    std::map<long,int> powers;
    for(int k = 2; k < primesVector.size(); k++){powers.insert(std::pair<long,int>(primesVector[k], 0));}

    for(long k = 2; k <= N; k++){
        long temp(k), index(0);
        while(temp > 0 && primesVector[index] <= temp){
            if(temp % primesVector[index] == 0){temp /= primesVector[index]; ++powers[primesVector[index]];}
            else{++index;}
        }
    }

    long output(1);
    std::map<long,int>::iterator myIter;
    for(myIter = powers.begin(); myIter != powers.end(); myIter++){output *= (2 * myIter->second + 1); output %= solMod; printf("%d\n", myIter->second);}

    printf("%ld\n", output);

    return 0;
}
