#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> h(n); for(ll p = 0; p < n; p++){scanf("%lld", &h[p]);}
        sort(h.begin(), h.end());
        std::vector<ll> g(n); g[0] = h[0];
        for(ll p = 1; p < n; p++){g[p] = g[p - 1] + h[p];}

        ll mx(g.back());
        for(long p = 1; p < n; p++){
            ll cand = (1 + p) * (g.back() - g[p - 1]);
            mx = (mx > cand) ? mx : cand;
        }

        printf("%lld\n", mx);
    }

    return 0;
}
