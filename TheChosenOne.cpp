#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int64_t gcd(int64_t a, int64_t b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long n; scanf("%ld", &n);
    std::vector<int64_t> a(n);
    long gg(0);
    for(long p = 0; p < n; p++){scanf("%lld", &a[p]); gg = gcd(a[p], gg);}
    sort(a.begin(), a.end());

    if(n == 1){printf("%lld\n", a[0] + 1); return 0;}

    int64_t g(0);
    for(long p = 1; p < n; p++){g = gcd(a[p], g);}
    if(g > gg){printf("%lld\n", g); return 0;}

    g = 0;
    for(long p = 0; p < n; p++){
        int64_t test = gcd(a[p], g); 
        if(test > gg){g = test;} //Guaranteed to not hold exactly once;
    }
    printf("%lld\n", g);

    return 0;
}
