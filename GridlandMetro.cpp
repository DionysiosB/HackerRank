#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
typedef long long ll;

int main(){

    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    std::map<ll, std::vector<std::pair<ll, ll> > > b;
    while(k--){
        ll r, c1, c2; scanf("%lld %lld %lld", &r, &c1, &c2);
        b[r].push_back(std::make_pair(c1, -1));
        b[r].push_back(std::make_pair(c2, 1));
    }

    ll total(m * n);
    for(std::map<ll, std::vector<std::pair<ll, ll> > >::iterator it = b.begin(); it != b.end(); it++){
        std::vector<std::pair<ll, ll> > v = it->second;
        sort(v.begin(), v.end());
        ll cur(0), left(0);
        for(ll p = 0; p < v.size(); p++){
            if(v[p].second < 0){if(cur == 0){left = v[p].first;}; --cur;}
            else if(v[p].second > 0){++cur; if(cur >= 0){total -= (v[p].first - left + 1);}}
        }
    }

    printf("%lld\n", total);

    return 0;
}
