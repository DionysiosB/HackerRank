#include <cstdio>
#include <vector>

long dfs(long node, long from, long &minDiff, const std::vector<std::vector<long> > &g, const std::vector<long> &data, const long &total){

    long cur(data[node]);
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(u == from){continue;}
        long val = dfs(u, node, minDiff, g, data, total);
        cur += val;
        long cand = total - 2 * val; if(cand < 0){cand = -cand;}
        minDiff = (minDiff < cand) ? minDiff : cand;
    }

    return cur;
}


int main(){

    long n; scanf("%ld", &n);
    long total(0);
    std::vector<long> data(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &data[p]); total += data[p];}

    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    long minDiff(total);
    dfs(1, -1, minDiff, g, data, total);
    printf("%ld\n", minDiff);

    return 0;
}
