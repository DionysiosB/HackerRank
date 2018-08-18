#include <cstdio>
#include <iostream>

int64_t gcd(int64_t a, int64_t b){return (b == 0) ? a : gcd(b, a % b);}
int64_t lcm(int64_t a, int64_t b){return (a / gcd(a, b)) * b;}
int64_t cumlcm(int64_t n){int64_t res(1); for(long p = 1; p <= n; p++){res = lcm(res, p);}; return res;}


int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        printf("%lld\n", cumlcm(n));
    }

    return 0;
}
