#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

ll dfs(ll cur, const std::vector<ll> &s, std::map<ll, ll> &hm){

    ll mx(0);
    for(long p = 0; p < s.size(); p++){
        if(cur <= s[p] || cur % s[p] != 0){continue;}

        ll val(0);
        if(hm.count(s[p])){val = hm[s[p]];}
        else{val = dfs(s[p], s, hm); hm[s[p]] = val;}

        long check = 1 + (cur / s[p]) * val;
        mx = (mx > check) ? mx : check;
    }

    return mx;
}


int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> s(m); 
        for(ll p = 0; p < m; p++){scanf("%lld", &s[p]);}

        std::map<ll, ll> hm;
        ll res = dfs(n, s, hm);
        printf("%lld\n", res);
    }

    return 0;
}
