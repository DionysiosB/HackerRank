#include <cstdio>

int main() {
    
    int dummy;
    int N(0); dummy = scanf("%d", &N);
    double total(0);
    for(int k = 0; k < N; k++){
        long temp(0); dummy = scanf("%ld", &temp);
        total += 0.5 * temp;
    }
    
    printf("%.1lf\n", total);
    
    return 0;
}
