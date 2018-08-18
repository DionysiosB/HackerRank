#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long ans(0);
        for(long a = 1; a <= n; a++){
            for(long b = a + 1; b <= n; b++){
                long u = a & b;
                if(ans < u && u < k){ans = u;}
            }
        }

        printf("%ld\n", ans);
    }

    return 0;
}
