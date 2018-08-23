#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    long n; scanf("%ld", &n);
    std::vector<int64_t> a(n);
    for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.rbegin(), a.rend());
    int64_t total(0), mult(1);
    for(long p = 0; p < n; p++){
        total += mult * a[p];
        mult *= 2;
    }
    
    printf("%lld\n", total);
    
    return 0;
}
