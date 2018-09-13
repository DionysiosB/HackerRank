#include <cstdio>
#include <vector>

int main(){

    double EPS = 1e-10;
    long n; scanf("%ld", &n);
    std::vector<double> h(n); for(long p = 0; p < n; p++){scanf("%lf", &h[p]);}
    long double minEnergy(0.0);
    for(long p = n - 1; p >= 0; p--){minEnergy += h[p]; minEnergy /= 2.0;}
    long needed = ((long)minEnergy) + (minEnergy > ((long)minEnergy));
    printf("%ld\n", needed);

    return 0;
}
