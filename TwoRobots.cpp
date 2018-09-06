#include <cstdio>
#include <vector>

long dist(long x, long y){return (x < y) ? (y - x) : (x - y);}
long cost(long prev, long x, long y){return (prev > 0) * dist(prev, x) + dist(x, y);}
const long MAX = 1e9;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long m, n; scanf("%ld %ld", &m, &n);
        std::vector<long> from(n + 1, 0), to(n + 1, 0);
        for(long p = 1; p <= n; p++){scanf("%ld %ld", &from[p], &to[p]);}

        std::vector<long> f(m + 1, MAX); f[0] = 0; 
        for(long st = 1; st <= n; st++){
            long prev = to[st - 1];
            std::vector<long> g(m + 1, MAX);

            for(long p = 0; p <= m; p++){
                long candA = f[p] + cost(prev, from[st], to[st]);
                g[p] = (g[p] < candA) ? g[p] : candA;
                long candB = f[p] + cost(p, from[st], to[st]);
                g[prev] = (g[prev] < candB) ? g[prev] : candB;
            }

            f = g;
            //printf("===========\n Step: %ld\n\n", st);
            //for(long p = 0; p <= m; p++){printf("%ld %ld\n", p, f[p]);}
        }

        long mn(MAX);
        for(long p = 0; p <= m; p++){mn = (mn < f[p]) ? mn : f[p];}
        printf("%ld\n", mn);
    }

    return 0;
}
