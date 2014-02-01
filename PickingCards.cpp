#include <cstdio>

int main(){

    const long MOD = 1000000007;

    int T(0); scanf("%d", &T);
    while(T--){
        long N(0); scanf("%ld", &N);
        long *array = new long[N];
        long current(0); long long total(1);
        for(long k = 0; k < N; k++){array[k] = 0;}
        for(long k = 0; k < N; k++){long temp(0); scanf("%ld", &temp); ++array[temp];}
        for(long k = 0; k < N; k++){
            current += array[k];
            total *= current;
            --current;
            total %= MOD;
        }
        printf("%lld\n", total);
    }
    return 0;
}
