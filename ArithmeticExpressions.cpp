#include <cstdio>
#include <vector>

int main(){

    const long M = 101;
    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    
    std::vector<std::vector<char> > s(M);
    std::vector<bool> f(M, 0); f[a[0]] = 1;

    for(long ind = 1; ind < n; ind++){
        std::vector<bool> g(M, 0);
        std::vector<std::vector<char> > t(M);
        long cur = a[ind];
        printf("Ind: %ld %ld\n", ind, cur);
        for(long p = 0; p < M; p++){
            if(!f[p]){continue;}
            printf("%ld -> %ld\n", ind, p);
            long u;
            u = p + cur; u %= M; if(!g[u]){g[u] = 1; t[u] = s[p]; t[u].push_back('+');}
            u = p - cur; u += M; u %= M; if(!g[u]){g[u] = 1; t[u] = s[p]; t[u].push_back('-');}
            u = p * cur; u %= M; if(!g[u]){g[u] = 1; t[u] = s[p]; t[u].push_back('*');}
        }

        f = g; s = t;
    }
    
    for(long p = 0; p < M; p++){if(f[p]){printf("Found: %ld\n", p);}}
    std::vector<char> list = s[0];
    printf("List Size:%ld\n", list.size());

    for(long p = 0; p < n - 1; p++){printf("%ld%c", a[p], list[p]);}; printf("%ld\n", a.back());

    return 0;
}
