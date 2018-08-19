#include <cstdio>

int main() {
    
    long q; scanf("%ld", &q);
    while(q--){
        long a, b, d; scanf("%ld %ld %ld", &a, &b, &d);
        if(a > b){long u = a; a = b; b = u;}
        long g = d;
        long candA = (g / b); g %= b;
        candA += (g / a); g %= a;
        candA += (g > 0) ? 2 : 0;
        
        long candB = (d / b) + 2 * (d % b > 0);
        printf("%ld\n", (candA < candB) ? candA : candB);
    }
    
    return 0;
}
