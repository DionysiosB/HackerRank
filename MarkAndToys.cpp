#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long N(0), K(0); scanf("%ld %ld", &N, &K);
    std::vector<long> price(N,0);
    for(int k = 0; k < N; k++){scanf("%ld", &price[k]);}
    std::sort(price.begin(), price.end());

    long numToys(0), totalPrice(0);
    for(int k = 0; k < N; k++){
        totalPrice += price[k];
        if(totalPrice < K){++numToys;}
        else{break;}
    }

    printf("%ld\n", numToys);

    return 0;
}
