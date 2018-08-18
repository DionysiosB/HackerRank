#include <cstdio>

double geom(double p, int k){
    
    if(k <= 0){return 0.0;}
    double res(p);
    while(--k){res *= (1.0 - p);}
    return res;
}

int main() {
    
    double num, den; scanf("%lf %lf", &num, &den);
    double p = num / den;
    int k; scanf("%d", &k);
    double total(0.0);
    for(int u = 1; u <= k; u++){total += geom(p, u);}
    printf("%.3lf\n", total);
    
    return 0;
}
