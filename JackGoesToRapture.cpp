#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
typedef long long ll;

int main(){

    const ll MX = 1e10;
    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<std::vector<std::pair<ll, ll> > > g(n + 1);
    for(ll p = 0; p < m; p++){
        ll x, y, w; scanf("%lld %lld %lld", &x, &y, &w);
        g[x].push_back(std::make_pair(y, w));
        g[y].push_back(std::make_pair(x, w));
    }

    std::vector<ll> cost(n + 1, MX); cost[1] = 0;
    std::queue<ll> q; q.push(1);

    while(!q.empty()){
        ll x = q.front(); q.pop();
        for(ll p = 0; p < g[x].size(); p++){
            ll u = g[x][p].first;
            ll w = g[x][p].second;
            ll check = (cost[x] > w) ? cost[x] : w;
            if(cost[u] > check){cost[u] = check; q.push(u);}
        }
    }

    if(cost[n] < MX){printf("%lld\n", cost[n]);}
    else{puts("NO PATH EXISTS");}

    return 0;
}
