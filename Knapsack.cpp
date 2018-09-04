#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<bool> f(k + 1, false); f[0] = true;
        for(ll p = 0; p < n; p++){for(ll u = a[p]; u <= k; u++){f[u] = f[u] | f[u - a[p]];}}
        for(ll p = k; p >= 0; p--){if(f[p]){printf("%lld\n", p); break;}}
    }

    return 0;
}
