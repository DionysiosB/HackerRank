#include <cstdio>
#include <vector>
#include <queue>

int main(){

    const long D = 6;

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > g(n + 1);
        for(long p = 0; p < m; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            g[x].push_back(y); g[y].push_back(x);
        }

        long s; scanf("%ld", &s);
        std::vector<long> dist(n + 1, -1); dist[s] = 0;
        std::queue<long> q; q.push(s);
        while(!q.empty()){
            long x = q.front(); q.pop();
            for(long p = 0; p < g[x].size(); p++){
                long u = g[x][p];
                if(dist[u] < 0 || dist[u] > dist[x] + D){dist[u] = dist[x] + D; q.push(u);}
            }
        }

        for(long p = 1; p <= n; p++){
            if(p == s){continue;}
            printf("%ld ", dist[p]);
        }
        puts("");
    }

    return 0;
}
