#include <cstdio>
#include <iostream>
#include <vector>

int64_t countDivisors(int64_t x){
    int64_t count(0);
    for(int64_t p = 1; p * p <= x; p++){
        if(x % p == 0){
            count += 2;
            if(p * p == x){--count;}
        }
    }

    return count;
}

std::vector<int64_t> getDivisors(int64_t N){
    std::vector<int64_t> numDivisors(N, 0);
    for(int64_t p = 1; p < N; p++){numDivisors[p] = countDivisors(p * (p + 1) / 2);}
    return numDivisors;
}



int main(){

    const int64_t N = 10000;
    int64_t t; scanf("%lld", &t);
    std::vector<int64_t> div = getDivisors(N);
    while(t--){
        int64_t n; scanf("%lld", &n);
        for(int64_t p = 1; p <= N; p++){if(div[p] > n){printf("%lld\n", p * (p + 1) / 2); break;}}
    }

    return 0;
}
