#include <cstdio>

int main(){

    long N(0), K(0), Q(0); scanf("%ld %ld %ld\n", &N, &K, &Q);
    long * array = new long[N];
    for(int u = 0; u < N; u++){scanf("%ld", array + u);}
    K %= N;

    while(Q--){
        long temp(0); scanf("%ld", &temp);
        printf("%ld\n", array[(N + temp - K) % N]);
    }

    return 0;
}
