#include <cstdio>
#include <vector>

int main() {
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1);
    for(long p = 1; p <= n; p++){long x; scanf("%ld", &x); a[x] = p;}
    for(long p = 1; p <= n; p++){printf("%ld\n", a[a[p]]);}
    
    return 0;
}
