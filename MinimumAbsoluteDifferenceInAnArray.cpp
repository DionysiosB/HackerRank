#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long minDiff(a.back() - a[0]);
    for(long p = 1; p < n; p++){
        long diff = a[p] - a[p - 1];
        minDiff = (minDiff < diff) ? minDiff : diff;
    }
    
    printf("%ld\n", minDiff);
    
    return 0;
}
