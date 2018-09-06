#include <cstdio>
#include <vector>
#include <queue>

long dist(long x, long y){return (x < y) ? (y - x) : (x - y);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long m, n; scanf("%ld %ld", &m, &n);
        std::vector<std::vector<long> > f(m + 1, std::vector<long>(m + 1, 3 * m * n + 1)); f[0][0] = 0;
        std::queue<std::pair<long, long> > q; q.push(std::make_pair(0, 0));
        for(long dv = 0; dv < n; dv++){
            long from, to; scanf("%ld %ld", &from, &to);
            std::queue<std::pair<long, long> > r;
            std::vector<std::vector<long> > g(m + 1, std::vector<long>(m + 1, 3 * m * n + 1));

            while(!q.empty()){
                std::pair<long, long> pos = q.front(); q.pop();
                long a(pos.first), b(pos.second);
                long cur = f[a][b];
                if(a == 0 && b == 0){g[to][0] = dist(from, to); r.push(std::make_pair(to, 0));}
                else if(b == 0){
                    g[to][0] = cur + dist(a, from) + dist(from, to); r.push(std::make_pair(to, 0));
                    long x = (a > to) ? a : to; long y = (a < to) ? a : to;
                    long cand = cur + dist(from, to);
                    g[x][y] = (g[x][y] < cand) ? g[x][y] : cand;
                    r.push(std::make_pair(x, y));
                }
                else{
                    long x = (to > b) ? to : b; long y = (to < b) ? to : b;
                    long cand = cur + dist(a, from) + dist(from, to);
                    g[x][y] = (g[x][y] < cand) ? g[x][y] : cand;
                    r.push(std::make_pair(x, y));

                    x = (to > a) ? to : a; y = (to < a) ? to : a;
                    cand = cur + dist(b, from) + dist(from, to);
                    g[x][y] = (g[x][y] < cand) ? g[x][y] : cand;
                    r.push(std::make_pair(x, y));
                }
            }

            f = g; q = r;
            for(long rr = 0; rr <= m; rr++){for(long cc = 0; cc <= m; cc++){printf("%ld\t", f[rr][cc]);} puts("");}; puts("=====\n");
            printf("Step: %ld\n", dv);
        }

        long mn(3 * m * n + 5);
        for(long rr = 0; rr <= m; rr++){for(long cc = 0; cc <= m; cc++){mn = (mn < f[rr][cc]) ? mn : f[rr][cc];}}
        printf("%ld\n", mn);
    }

    return 0;
}
