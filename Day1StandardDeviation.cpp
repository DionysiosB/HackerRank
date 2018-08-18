#include <cstdio>
#include <cmath>

int main() {
    
    long n; scanf("%ld", &n);
    double sq(0), s(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        sq += x * x;
        s += x;
    }
    
    double std = sqrt((n * sq - s * s)) / n;
    printf("%.1lf\n", std);
    
    return 0;
}
