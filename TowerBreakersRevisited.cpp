#include <cstdio>
#include <vector>

long countPrimeFactors(long x){

    long cnt(0);
    for(long p = 2; p <= x; p++){
        while(x % p == 0){++cnt; x /= p;}
        if(x <= 1){break;}
        if(p * p > x){++cnt; break;}
    }

    return cnt;
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(0);
        while(n--){
            long h; scanf("%ld", &h);
            long cnt = countPrimeFactors(h);
            res ^= cnt;
        }

        puts(res ? "1" : "2");
    }

    return 0;
}
