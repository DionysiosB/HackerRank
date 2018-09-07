#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<std::pair<ll, ll> > a(n);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p].first); a[p].second = p;}
    sort(a.begin(), a.end());
    ll minLoss(1e18);
    for(long p = 1; p < n; p++){
        if(a[p - 1].second < a[p].second){continue;}
        ll cand = a[p].first - a[p - 1].first;
        if(cand <= 0){continue;}
        minLoss = (minLoss < cand) ? minLoss : cand;
    }

    printf("%lld\n", minLoss);

    return 0;
}
