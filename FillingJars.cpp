#include <cstdio>
#include <vector>

int main(){

    long long N, M; scanf("%lld %lld\n", &N, &M);
    
    std::vector<long long> boundaries(N + 1,0);
    while(M--){
        long long start, finish, number; scanf("%lld %lld %lld\n", &start, &finish, &number);
        boundaries[start] += number;
        if(finish < N){boundaries[finish + 1] -= number;}
    }

    long long current(0), total(0);
    for(long p = 1; p <= N; p++){current += boundaries[p]; total += current;}
    printf("%lld\n", total / N);

    return 0;
}
