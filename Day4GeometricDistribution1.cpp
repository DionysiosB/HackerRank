#include <cstdio>

double geom(double p, int k){
    
    double res(p);
    while(--k){res *= (1.0 - p);}
    return res;
}

int main() {
    
    double num, den; scanf("%lf %lf", &num, &den);
    double p = num / den;
    int k; scanf("%d", &k);
    printf("%.3lf\n", geom(p, k));
    
    return 0;
}
