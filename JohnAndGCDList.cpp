#include <cstdio>
#include <vector>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n + 1, 0);
        b[0] = a[0]; b[n] = a[n - 1];
        for(long p = 1; p < n; p++){b[p] = a[p] * a[p - 1] / gcd(a[p], a[p - 1]);}
        for(long p = 0; p <= n; p++){printf("%ld ", b[p]);}
        puts("");
    }
    
    return 0;
}
