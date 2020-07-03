#include <cstdio>

int main(){

    int testCases; scanf("%d\n", &testCases);
    while(testCases--){
        long n; scanf("%ld\n", &n);

        double sumOfProbabilities(0), sumOfSquares(0);
        for(long p = 0; p < n; p++){
            double x; scanf("%lf", &x);
            sumOfProbabilities += x;
            sumOfSquares += x * x;
        }

        double ans = sumOfSquares / sumOfProbabilities;
        printf("%.5lf\n", ans);
    }

    return 0;
}
