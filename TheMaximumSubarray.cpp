#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){

        long n; scanf("%ld\n", &n);
        long sumPos(0);
        long currentMax(0);
        long maxElement(-1e5);
        long current(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            maxElement = (a > maxElement) ? a : maxElement;
            sumPos += (a > 0) * a;
            current += a;
            if(current < 0){current = 0;}
            currentMax = (current > currentMax) ? current : currentMax;
        }

        if(maxElement < 0){currentMax = sumPos = maxElement;}
        printf("%ld %ld\n", currentMax, sumPos);
    }

    return 0;
}
