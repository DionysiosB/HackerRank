#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 1000000007;
    const ll RR = 1003;
    const ll CC = 1003;
    const ll E = 4;

    std::vector<ll> z(CC, 0); z[0] = 1;
    for(ll p = 1; p < CC; p++){for(ll len = 1; len <= E; len++){if(p >= len){z[p] += z[p - len]; z[p] %= MOD;}}}
    std::vector<std::vector<ll> > t(RR, std::vector<ll>(CC, 1)); t[1] = z; 
    for(ll rr = 2; rr < RR; rr++){for(ll cc = 1; cc < CC; cc++){t[rr][cc] = t[rr - 1][cc] * z[cc]; t[rr][cc] %= MOD;}}
    //for(ll rr = 0; rr < 10; rr++){for(ll cc = 0; cc < 10; cc++){printf("%lld\t", t[rr][cc]);}; puts("");}

    ll q; scanf("%lld", &q);
    while(q--){
        ll h, w; scanf("%lld %lld", &h, &w);
        std::vector<ll> s(w + 1, 0); s[1] = 1;
        for(ll col = 1; col <= w; col++){
            s[col] = t[h][col];
            for(ll dd = 1; dd < col; dd++){s[col] -= (s[dd] * t[h][col - dd] % MOD); s[col] %= MOD;}
            s[col] += MOD; s[col] %= MOD;
        }
        printf("%lld\n", s[w]);
    }

    return 0;
}
