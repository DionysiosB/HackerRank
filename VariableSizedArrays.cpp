#include <cstdio>
#include <vector>

int main() {
    
    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<std::vector<long> > a(n);
    
    for(long p = 0; p < n; p++){
        long k; scanf("%ld", &k);
        a[p] = std::vector<long>(k, 0);
        for(long u = 0; u < k; u++){scanf("%ld", &a[p][u]);}
    }
    
    while(q--){
        long x, y; scanf("%ld %ld", &x, &y);
        printf("%ld\n", a[x][y]);
    }
    
    return 0;
}
