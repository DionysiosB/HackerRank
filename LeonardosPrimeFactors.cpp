#include <iostream>
#include <vector>

int main(){

    std::vector<int64_t> primes = {2, 3, 5, 7, 11,13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    std::vector<int64_t> prod(primes.size());
    prod[0] = primes[0]; 
    for(int p = 1; p < primes.size(); p++){prod[p] = prod[p - 1] * primes[p];}

    long q; scanf("%ld", &q);
    while(q--){
        int64_t n; scanf("%lld", &n);
        int num(0); while(num < prod.size() && prod[num] <= n){++num;}
        printf("%d\n", num);
    }

    return 0;
}
