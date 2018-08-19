#include <cstdio>
#include <vector>

int main() {
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0);
    for(long p = 1; p <= n; p++){long x; scanf("%ld", &x); a[p] = a[p - 1] + x;}
    long d, m; scanf("%ld %ld", &d, &m);
    long count(0);
    for(long p = m; p <= n; p++){count += (a[p] == a[p - m] + d);}
    printf("%ld\n", count);
    
    return 0;
}
