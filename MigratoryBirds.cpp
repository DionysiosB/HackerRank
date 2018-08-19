#include <cstdio>
#include <vector>

int main() {
    
    const int D = 5;
    std::vector<long> a(D + 1, 0);
    long n; scanf("%ld", &n);
    while(n--){long x; scanf("%ld", &x); ++a[x];}
    long mostCommon(0), maxCount(0);
    for(long p = 1; p <= D; p++){if(a[p] > maxCount){maxCount = a[p]; mostCommon = p;}}
    printf("%ld\n", mostCommon);
    
    return 0;
}
