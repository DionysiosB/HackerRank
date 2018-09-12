#include <cstdio>
#include <vector>

int main(){

    const long N = 1007;
    long n; scanf("%ld", &n);
    std::vector<long> a(N), b(N);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++a[x];}
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++b[x];}

    long cnt(0);
    for(long p = 0; p < N; p++){cnt += (a[p] < b[p]) ? a[p] : b[p];}
    printf("%ld\n", (cnt < n) ? (cnt + 1) : (n - 1));

    return 0;
}
