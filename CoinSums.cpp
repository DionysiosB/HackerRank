#include <cstdio>
#include <vector>


std::vector<long long> countWays(std::vector<long long> v, long long UB, long long MOD){
    
    std::vector<long long> f(UB, 0);
    f[0] = 1;
    
    for(long d : v){
        for(long p = 1; p < UB; p++){
            if(p < d){continue;}
            f[p] += f[p - d];
            f[p] %= MOD;
        }
    }
    
    return f;
}


int main(){
    
    const long long N = 1e5 + 7;
    const long long MOD = 1e9 + 7;
    std::vector<long long> v = {1, 2, 5, 10, 20, 50, 100, 200};
    std::vector<long long> w = countWays(v, N, MOD);
        
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%lld\n", w[n]);
    }
    
    return 0;
}
