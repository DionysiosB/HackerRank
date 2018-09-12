#include <cstdio>
#include <vector>
#include <map>
#include <set>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::map<long, std::set<long> > g;
        for(long p = 0; p < m; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            g[x].insert(y); g[y].insert(x);
        }

        long s; scanf("%ld", &s);

        std::vector<long> dist(n + 1, n + 1);
        std::set<long> rs;
        std::map<long, std::set<long> > ds;
        dist[s] = 0; ds[0].insert(s);

        for(long p = 1; p <= n; p++){
            if(p == s){continue;}
            else if(g[s].count(p)){rs.insert(p);}
            else{dist[p] = 1; ds[1].insert(p);}
        }

        long prev(1);
        while(rs.size() > 0){
            std::set<long> tmp;
            for(std::set<long>::iterator it = rs.begin(); it != rs.end(); it++){
                long node = *it;
                if(g.count(node) && g[node].size() < ds[prev].size()){tmp.insert(node); continue;}
                for(std::set<long>::iterator itb = ds[prev].begin(); it != ds[prev].end(); it++){
                    long other = *itb;
                    if(g.count(node) && g.count(other) && !g[node].count(other)){tmp.insert(node); break;}
                }
            }

            ds[prev + 1] = tmp;
            for(std::set<long>::iterator it = tmp.begin(); it != tmp.end(); it++){long tr = *it; dist[tr] = prev + 1; rs.erase(tr);}
            ++prev;
        }

        for(long p = 1; p <= n; p++){
            if(p == s){continue;}
            printf("%ld ", dist[p]);
        }
        puts("");
    }

    return 0;
}
