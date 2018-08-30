#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

ll find(std::vector<ll> &f, ll x){return (f[x] == x) ? x : (f[x] = find(f, f[x]));}
void merge(std::vector<ll> &f, ll x, ll y){f[find(f, x)] = find(f, y);}

int main(){

    ll n, b; scanf("%lld %lld", &n, &b);
    std::vector<ll> f(n); for(ll p = 0; p < n; p++){f[p] = p;}
    while(b--){
        ll x, y; scanf("%lld %lld", &x, &y);
        merge(f, x, y);
    }

    std::map<ll, ll> g;
    for(ll p = 0; p < n; p++){++g[find(f, p)];}

    ll total(0);
    for(std::map<ll, ll>::iterator it = g.begin(); it != g.end(); it++){
        ll u = it->second;
        total += u * (n - u);
    }

    printf("%lld\n", total / 2);

    return 0;
}
