#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> v(n);
    for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}

    long total(0);
    for(long p = 0; p < n; p++){
        if(p == k){continue;}
        total += v[p];
    }

    total /= 2;
    long b; scanf("%ld", &b);
    if(b == total){puts("Bon Appetit");}
    else{printf("%ld\n", b - total);}

    return 0;
}
