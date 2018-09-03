#include <cstdio>
#include <vector>
typedef long long ll;

void dfs(ll node, const std::vector<std::vector<ll> > &g, std::vector<bool> &vis, ll &count){

    if(vis[node]){return;}
    vis[node] = true; ++count;
    for(ll p = 0; p < g[node].size(); p++){
        ll u = g[node][p];
        if(vis[u]){continue;}
        dfs(u, g, vis, count);
    }

    return;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m, cl, cr; scanf("%lld %lld %lld %lld", &n, &m, &cl, &cr);
        std::vector<std::vector<ll> > g(n + 1);
        for(ll p = 0; p < m; p++){
            ll x, y; scanf("%lld %lld", &x, &y);
            g[x].push_back(y); g[y].push_back(x);
        }

        std::vector<bool> visited(n + 1, false);
        ll cost(0);
        for(ll p = 1; p <= n; p++){
            if(visited[p]){continue;}
            ll cnt(0);
            dfs(p, g, visited, cnt);
            cost += cl + (cnt - 1) * (cl < cr ? cl : cr);
        }

        printf("%lld\n", cost);
    }

    return 0;
}
