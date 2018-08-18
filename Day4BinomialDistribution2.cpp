#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

double binom(int n, int k){
    double prod(1.0);
    for(int p = 1; p <= k; p++){prod *= 1.0 * (n - p + 1) / p;}
    return prod;
}

int main() {
    
    double p; scanf("%lf", &p); p /= 100.0;
    const int n = 10;
    const int m = 2;
    
    double pra(0.0);
    for(int k = 0; k <= m; k++){pra += binom(n, k) * pow(p, k) * pow(1 - p, n - k);}
    printf("%.3lf\n", pra);

    double prb(0.0);
    for(int k = m; k <= n; k++){prb += binom(n, k) * pow(p, k) * pow(1 - p, n - k);}
    printf("%.3lf\n", prb);
    
    return 0;
}
