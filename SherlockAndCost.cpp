#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

        std::vector<std::vector<long> > f(n, std::vector<long>(2, 0));

        for(long p = 1; p < n; p++){
            f[p][0] = std::max(f[p - 1][0], f[p - 1][1] + (b[p - 1] - 1));
            f[p][1] = std::max(f[p - 1][0] + (b[p] - 1), f[p - 1][1] + std::abs(b[p] - b[p - 1]));
        }

        printf("%ld\n", f[n - 1][0] > f[n - 1][1] ? f[n - 1][0] : f[n - 1][1]);
    }

    return 0;
}
