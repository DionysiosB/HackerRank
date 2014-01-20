#include <cstdio>
#include <algorithm>

int main(void){
 
    long N(0), K(0); scanf("%ld %ld", &N, &K);
    
    long *price = new long[N];
    for(long p = 0; p < N; p++){scanf("%ld", price + p);}
    std::sort(price, price + N);
    
    long total(0), counter(0), multiplier(1);
    for(int p = N - 1; p >= 0; p--){
        total += multiplier * price[p];
        if(++counter == K){counter = 0; ++multiplier;}
    }
    printf("%ld\n", total);
    return 0;
}
