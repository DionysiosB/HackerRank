#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> d(m); for(long p = 0; p < m; p++){scanf("%lld", &d[p]);}

    std::vector<ll> v(n + 1, 0);
    v[0] = 1;
    for(long p = 0; p < m; p++){
        for(long s = d[p]; s <= n; s++){
            v[s] += v[s - d[p]];
        }
    }

    printf("%lld\n", v[n]);

    return 0;
}
