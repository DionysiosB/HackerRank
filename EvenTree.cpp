#include<cstdio>
#include <vector>

long dfs(long node, long from, const std::vector<std::vector<long> > &g, long &cnt){

    long total(1);
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(u == from){continue;}
        long z = dfs(u, node, g, cnt);
        if(z % 2 == 0){++cnt;}
        total += (z & 1);
    }

    return total;
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    long cut(0);
    dfs(0, -1, g, cut);
    printf("%ld\n", cut);

    return 0;
}
