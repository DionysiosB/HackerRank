#include <cstdio>
#include <vector>

int main(){

    long N = 10007;
    std::vector<long> f(N, 0);

    long n; scanf("%ld", &n);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); --f[x];}

    long m; scanf("%ld", &m);
    for(long p = 0; p < m; p++){long x; scanf("%ld", &x); ++f[x];}

    for(long p = 0; p < N; p++){if(f[p]){printf("%ld ", p);}}
    puts("");

    return 0;
}
