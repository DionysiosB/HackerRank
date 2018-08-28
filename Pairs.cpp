#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::map<ll, ll> f;
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); ++f[x];}
    ll total(0);
    for(std::map<ll, ll>::iterator it = f.begin(); it != f.end(); it++){
        ll key = it->first;
        if(!f.count(key + k)){continue;}
        total += f[key] * f[key + k];
    }

    printf("%lld\n", total);

    return 0;
}
