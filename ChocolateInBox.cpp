#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    long cur(0), cnt(0);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); cur ^= a[p];}
    for(long p = 0; p < n; p++){cnt += ((a[p] ^ cur) < a[p]);}

    printf("%ld\n", cnt);

    return 0;
}
