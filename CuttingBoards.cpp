#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    
    int numCases(0); scanf("%d", &numCases);
    while(numCases--){

        long M(0), N(0); scanf("%ld %ld", &M, &N);
        std::vector<std::pair<long long,char>> cost(M + N - 2, std::pair<long long, char>(0,'a'));

        long temp(0);
        for(long long k = 0; k < M + N - 2; k++){scanf("%ld", &temp); cost[k] = std::pair<long long,char>(temp, ((k < M - 1) ? 'x' : 'y'));}
        std::sort(cost.begin(), cost.end());

        long long totalCost = 0; 
        long long xCuts(1), yCuts(1);

        for(long long k = M + N - 3; k >= 0; k--){
            if(cost[k].second == 'x'){totalCost += yCuts * cost[k].first; ++xCuts;}
            else if(cost[k].second == 'y'){totalCost += xCuts * cost[k].first; ++yCuts;}
        }

        printf("%lld\n", totalCost);

    }

    return 0;
}
