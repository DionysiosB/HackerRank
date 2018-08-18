#include <cstdio>
#include <iostream>
#include <cmath>

int64_t sumOfSquares(int64_t n){return n*(n+1)*(2*n+1)/6;}
int64_t squareOfSum(int64_t n){return n * n * (n + 1) * (n + 1) / 4;}
int64_t squaresDiff(int64_t n){return squareOfSum(n)-sumOfSquares(n);}


int main(){

    int t; scanf("%d", &t);
    while(t--){
        int64_t n; scanf("%lld", &n);
        printf("%lld\n", squaresDiff(n));
    }

    return 0;
}
