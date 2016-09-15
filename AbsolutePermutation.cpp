#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long n, k; scanf("%ld %ld\n", &n, &k);
        if(k == 0){for(long p = 1; p <= n; p++){printf("%ld ", p);}; puts("");}
        else if(n % (2 * k) == 0){
            for(long p = 1; p <= n; p+= 2 * k){
                for(long q = 0; q < k; q++){printf("%ld ", p + k + q);}
                for(long q = 0; q < k; q++){printf("%ld ", p + q);}
            }
            puts("");
        }
        else{puts("-1");}
    }

    return 0;
}
