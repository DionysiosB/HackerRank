#include <cstdio>
#include <cmath>

int main(){

    const int C = 4;
    int T(0); scanf("%d", &T);

    while(T--){

        int N(0); scanf("%d", &N);
        long * comb = new long[N + 1];
        for(int k = 0; k <= N; k++){
            if(k < C){comb[k] = 1;}
            else{comb[k] = comb[k - 1] + comb[k - C];}
        }

        long ways = comb[N];
        bool *prime = new bool[ways + 1];
        prime[0] = prime[1] = 0; for(int k = 2; k <= ways; k++){prime[k] = 1;}
        for(long k = 2; k <= sqrt(ways); k++){
            if(!prime[k]){continue;}
            for(long m = 2 * k; m <= ways; m += k){prime[m] = 0;}
        }

        long total(0);
        for(int k = 2; k <= ways; k++){total += prime[k];}

        printf("%ld\n", total);

    }
    return 0;
}
