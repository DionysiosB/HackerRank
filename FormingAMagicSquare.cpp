#include <cstdio>
#include <vector>

int main() {
    
    const int N = 9;
    const int D = 8; //Number of magic squares;
    int ms[D][N] = {{8, 1, 6, 3, 5, 7, 4, 9, 2}, {6, 1, 8, 7, 5, 3, 2, 9, 4}, {4, 3, 8, 9, 5, 1, 2, 7, 6},
    {2, 7, 6, 9, 5, 1, 4, 3, 8}, {2, 9, 4, 7, 5, 3, 6, 1, 8}, {4, 9, 2, 3, 5, 7, 8, 1, 6}, 
    {6, 7, 2, 1, 5, 9, 8, 3, 4}, {8, 3, 4, 1, 5, 9, 6, 7, 2}};
    
    
    int sq[N];
    for(int p = 0; p < N; p++){scanf("%d", sq + p);}
    
    int minCost(100);
    for(int d = 0; d < D; d++){
        int cost(0);
        for(int k = 0; k < N; k++){
            int diff = sq[k] - ms[d][k];
            if(diff < 0){diff = -diff;}
            cost += diff;
        }
        minCost = (minCost < cost) ? minCost : cost;
    }
    
    printf("%d\n", minCost);
    
    return 0;
}
