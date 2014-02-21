#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    int numCases(0); scanf("%d", &numCases);
    while(numCases--){

        long M(0), N(0); scanf("%ld %ld", &M, &N);
        std::vector<long> costX(N, 0);
        std::vector<long> costY(M, 0);

        costX[0] = costY[0] = 0;
        for(long long k = 1; k < N; k++){scanf("%ld", &costX[k]);}
        for(long long k = 1; k < M; k++){scanf("%ld", &costY[k]);}
        std::sort(costX.begin(), costX.end());
        std::sort(costY.begin(), costY.end());

        long long totalCost = 0; 
        long long piecesX(1), piecesY(1);

        while(piecesX < N || piecesY < M){
            long long testX = piecesY * costX[N - piecesX];
            long long testY = piecesX * costY[M - piecesY];

            if(testX >= testY){totalCost += testX; ++piecesX;}
            else{totalCost += testY; ++piecesY;}
        }

        printf("%lld\n", totalCost);

    }

    return 0;
}
