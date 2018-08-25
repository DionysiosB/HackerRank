#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        std::vector<long> r(n, n);
        for(long p = 1; p < n; p++){r[p] = (a[p] > a[p - 1]) ? (n - p) : r[p - 1];}
        
        double res(0.0);
        for(long p = 0; p < n; p++){res += 1.0 / (r[p] + 1);}
        res *= (n + 1);
        
        printf("%.2lf\n", res);
    }
    
    return 0;
}

//Solution: https://cs.stackexchange.com/questions/1076/how-to-approach-vertical-sticks-challenge
