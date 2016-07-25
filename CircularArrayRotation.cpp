#include <cstdio>
#include <vector>

int main(){

    long n, k, q; scanf("%ld %ld %ld\n", &n, &k, &q);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    while(q--){
        long x; scanf("%ld", &x);
        printf("%ld\n", a[(n + ((x - k)%n)) % n]);
    }

    return 0;
}
