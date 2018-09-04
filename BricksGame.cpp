#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n + 1, 0);
        for(ll p = n; p > 0; p--){scanf("%lld", &a[p]);}

        std::vector<ll> t(n + 1, 0); for(ll p = 1; p <= n; p++){t[p] = t[p - 1] + a[p];}
        std::vector<ll> f(n + 1, 0);
        for(ll p = 1; p <= n; p++){
            ll g1(0), g2(0), g3(0);
            g1 = a[p] + (t[p - 1] - f[p - 1]);
            if(p > 1){g2 = a[p] + a[p - 1] + (t[p - 2] - f[p - 2]);}
            if(p > 2){g3 = a[p] + a[p - 1] + a[p - 2] + (t[p - 3] - f[p - 3]);}
            f[p] = (g1 > g2) ? g1 : g2;
            f[p] = (f[p] > g3) ? f[p] : g3;
        }

        printf("%lld\n", f[n]);
    }

    return 0;
}
