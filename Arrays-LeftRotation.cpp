#include <cstdio>
#include <vector>

int main(){

    long n, d; scanf("%ld %ld", &n, &d);
    std::vector<long> a(n); 
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < n; p++){printf("%ld ", a[(p + d) % n]);}
    puts("");

    return 0;
}
