#include <cstdio>

int main() {
    
    const long P = 1234567;
   
    int T(0); scanf("%d", &T);
    
    while(T--){
    
        int N(0); scanf("%d", &N);
        long temp(0); long long total(1);
        for(int k = 0; k < N - 1; k++){scanf("%ld", &temp); total *= temp; total %= P;}
        printf("%lld\n", total);
    }
    
    return 0;
}
