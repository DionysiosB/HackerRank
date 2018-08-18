#include <cstdio>
#include <cmath>

double poisson(double lambda, int k){
    
    if(k < 0){return 0.0;}
    double prob(exp(-lambda));
    for(int u = 1; u <= k; u++){prob *= lambda / u;}
    return prob;
}

int main() {
    
    double lambda; scanf("%lf", &lambda);
    int k; scanf("%d", &k);
    printf("%.3lf\n", poisson(lambda, k));
    
    return 0;
}
