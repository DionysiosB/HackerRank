#include <cstdio>
#include <vector>


int main() {

    const long B = 1e5 + 7;
    
    std::vector<long> v(B, 1);
    for(long p = 2; p < B; p++){
        for(long u = 2; u * p < B; u++){v[u * p] += p;}
    }

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        
        long long total(0);
        for(long p = 2; p < n; p++){
            if(v[p] < B && v[p] != p && v[v[p]] == p){total += p;}
        }
                
        printf("%lld\n", total);
    }

    return 0;
}
