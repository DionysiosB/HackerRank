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
    
    double rb, rg; scanf("%lf %lf", &rb, &rg);
    double p = rb / (rb + rg);
    const int m = 3;
    const int n = 6;
    
    
    double total(0.0);
    for(int k = m; k <= n; k++){total += binom(n, k) * pow(p, k) * pow(1 - p, n - k);}
    printf("%.3lf\n", total);
    
    return 0;
}
