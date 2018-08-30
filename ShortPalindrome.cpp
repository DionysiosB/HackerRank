#include<iostream>
#include<vector>
typedef long long ll;

int main(){

    const ll B = 26;
    const ll MOD = 1e9 + 7;
    std::vector<ll> f(B, 0);
    std::vector<std::vector<ll> > ff(B, std::vector<ll>(B, 0));
    std::vector<std::vector<ll> > fff(B, std::vector<ll>(B, 0));

    std::string s; std::cin >> s;
    ll total(0);

    for(ll p = 0; p < s.size(); p++){
        ll x = s[p] - 'a';
        for(ll u = 0; u < B; u++){total += fff[x][u]; total %= MOD;}
        for(ll u = 0; u < B; u++){fff[u][x] += ff[u][x];}
        for(ll u = 0; u < B; u++){ff[u][x] += f[u];}
        ++f[x];
    }

    std::cout << total << std::endl;

    return 0;
}
