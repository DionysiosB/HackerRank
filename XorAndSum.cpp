#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;


ll f(const std::vector<ll> &v, ll pos){
    if(pos < 0){return 0;}
    else if(pos >= v.size()){return v.back();}
    else{return v[pos];}
}


int main(){

    const ll MOD = 1000000007;
    const ll F = 314159;

    std::string s, t; std::cin >> s >> t;
    ll m = s.size(); ll n = t.size();
    std::vector<ll> a(m, 0); for(ll p = 0; p < m; p++){a[p] = (s[m - 1 - p] == '1');}
    std::vector<ll> b(n, 0); for(ll p = 0; p < n; p++){b[p] = (t[n - 1 - p] == '1');}

    std::vector<ll> cs(n, 0); cs[0] = b[0];
    for(ll p = 1; p < n; p++){cs[p] = cs[p - 1] + b[p];}

    ll total = (a[0] ^ b[0]) + a[0] * F; ll binPower(1);
    for(ll p = 1; p < F + n; p++){
        ll abit = (p < m) ? a[p] : 0;
        binPower *= 2; binPower %= MOD;
        ll ones = f(cs, p) - f(cs, p - F - 1);
        ll zeros = F + 1 - ones;
        total += (abit ? zeros : ones) * binPower; total %= MOD;
    }

    printf("%lld\n", total);

    return 0;
}
