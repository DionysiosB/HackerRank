#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> h(n); for(long p = 0; p < n; p++){scanf("%ld", &h[p]);}
    long minEnergy(0);
    for(long p = n - 1; p >= 0; p--){minEnergy += (h[p] + 1); minEnergy /= 2;}
    printf("%ld\n", minEnergy);

    return 0;
}
