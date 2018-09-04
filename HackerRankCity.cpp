#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll M = 1000000007;
    ll n; scanf("%lld", &n);
    std::vector<ll> a(n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}   //Edge weights
    std::vector<ll> r(n + 1, 1); for(ll p = 1; p <= n; p++){r[p] = 4 * r[p - 1] + 2; r[p] %= M;}  //Order of the graph (Number of vertices at each step)

    std::vector<ll> d(n + 1, 0); for(ll p = 1; p <= n; p++){d[p] = 2 * d[p - 1] + 3 * a[p]; d[p] %= M;}   //Diameter

    std::vector<ll> g(n + 1, 0);   // Sum of distances from the upper left node to everyone else
    for(ll p = 1; p <= n; p++){
        g[p] = 4 * g[p - 1] % M
            + 3 * (d[p - 1] * r[p - 1] % M) % M
            + 8 * (r[p - 1] * a[p] % M) % M
            + 2 * d[p - 1] % M
            + 3 * a[p]; 
        g[p] %= M;
    }

    std::vector<ll> s(n + 1, 0);  //Sum of distances
    for(ll p = 1; p <= n; p++){
        s[p] = 4 * s[p - 1] % M
            + 12 * (r[p - 1] * g[p - 1] % M) % M 
            + (16 * r[p - 1] % M) * (r[p - 1] * a[p] % M) % M
            + 8 * g[p - 1] % M
            + 12 * (r[p - 1] * a[p] % M) % M
            + a[p] % M;
        s[p] %= M;
    }

    printf("%lld\n", s[n]);

    return 0;
}
