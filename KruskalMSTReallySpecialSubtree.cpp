#include <cstdio>
#include <vector>
#include <algorithm>

struct edge{long w, x, y;};

bool edgeComp(edge A, edge B){
    if(A.w != B.w){return (A.w < B.w);}
    else{return (A.w + A.x + A.y) < (B.w + B.x + B.y);}
}

long find(std::vector<long> &f, long x){return (x == f[x]) ? x : (f[x] = find(f, f[x]));}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<edge> g(m);
    for(long p = 0; p < m; p++){scanf("%ld %ld %ld", &g[p].x, &g[p].y, &g[p].w);}
    sort(g.begin(), g.end(), edgeComp);

    long total(0);
    std::vector<long> h(n + 1); for(long p = 0; p <= n; p++){h[p] = p;}

    for(long p = 0; p < m; p++){
        long u = find(h, g[p].x);
        long v = find(h, g[p].y);

        if(u == v){continue;}
        h[u] = v; total += g[p].w;
    }

    printf("%ld\n", total);

    return 0;
}
