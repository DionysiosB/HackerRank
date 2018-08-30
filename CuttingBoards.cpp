#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;


int main(){
    
    const ll MOD = 1e9 + 7;
    int q(0); scanf("%d", &q);
    while(q--){

        long M(0), N(0); scanf("%ld %ld", &M, &N);
        std::vector<std::pair<ll,char>> cost(M + N - 2, std::pair<ll, char>(0,'a'));

        long temp(0);
        for(ll k = 0; k < M + N - 2; k++){scanf("%ld", &temp); cost[k] = std::pair<ll,char>(temp, ((k < M - 1) ? 'x' : 'y'));}
        std::sort(cost.begin(), cost.end());

        ll total = 0; 
        ll xCuts(1), yCuts(1);

        for(ll k = M + N - 3; k >= 0; k--){
            if(cost[k].second == 'x'){total += yCuts * cost[k].first; ++xCuts;}
            else if(cost[k].second == 'y'){total += xCuts * cost[k].first; ++yCuts;}
            total %= MOD;
        }

        printf("%lld\n", total);
    }

    return 0;
}
