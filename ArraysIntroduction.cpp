#include <cstdio>
#include <vector>

int main() {
    long n; scanf("%ld\n", &n);
    std::vector<long> v(n);
    for(long p = 0; p < n; p++){scanf("%ld ", &v[p]);}
    for(long p = n - 1; p >= 0; p--){printf("%ld ", v[p]);}
    puts("");
    
    return 0;
}
