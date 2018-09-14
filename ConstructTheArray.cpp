#include <cstdio>
typedef long long ll;

int main(){


    ll MOD = 1e9 + 7;
    ll n, k, x; scanf("%lld %lld %lld", &n, &k, &x);

    ll f(0), g(1);
    for(long p = 1; p < n; p++){
        ll fn = (k - 2) * f + g;
        ll gn = (k - 1) * f;
        f = fn % MOD; g = gn % MOD;
    }

    printf("%lld\n", (x > 1) ? f : g);

    return 0;
}
