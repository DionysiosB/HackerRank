#include <cstdio>
#include <vector>

int main() {
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    std::vector<long> w(n);
    
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &w[p]);}
    double total(0), den(0);
    for(long p = 0; p < n; p++){total += a[p] * w[p]; den += w[p];}
    double wavg = total / den;
    printf("%.1lf\n", wavg);
    
    return 0;
}
