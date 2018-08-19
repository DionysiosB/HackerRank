#include <cstdio>
#include <vector>

int main() {
    
    long s, n, m; scanf("%ld %ld %ld", &s, &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}
    
    long spend(-1);
    for(long x = 0; x < n; x++){
        for(long y = 0; y < m; y++){
            long cand = a[x] + b[y];
            if(cand > s){continue;}
            spend = (spend > cand) ? spend : cand;
        }
    }
    
    printf("%ld\n", spend);
    
    return 0;
}
