#include <cstdio>
typedef long long ll;

ll sum(ll n,ll k) {
    ll g1 = n % k ;
    ll g2 = k - g1 ;
    ll sz1 = n / k + 1 ;
    ll sz2 = n / k ;
    ll ret = g1 * sz1 * g2 * sz2 + g1 *(g1 - 1) * sz1 * sz1 / 2 + g2 *(g2 - 1) * sz2 * sz2 / 2 ;
    return ret ;
}

int main() {

    ll t; scanf("%lld", &t);
    while(t--) {
        ll n, m; scanf("%lld %lld", &n, &m);
        ll left(1), right(n);
        while (left < right) {
            ll md = (left + right) / 2;
            if(sum(n, md) >= m){right = md;}
            else{left = md + 1;}
        }

        printf("%lld\n", left);
    }

    return 0;
}
