#include <iostream>
#include <vector>

const int N = 1024;
const int B = 10;

int main(){

    std::ios_base::sync_with_stdio(false);


    std::vector<long> a(N, 0);
    long n; std::cin >> n;
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        std::vector<bool> d(B, 0);
        for(long u = 0; u < s.size(); u++){d[s[u] - '0'] = 1;}
        long r(0); for(long u = B - 1; u >= 0; u--){r = 2 * r + d[u];}
        ++a[r];
    }


    long long total(0);
    for(long p = 0; p < N; p++){
        for(long q = p + 1; q < N; q++){
            if((p | q) < N - 1){continue;}
            total += a[p] * a[q];
        }
    }

    total += a[N - 1] * (a[N - 1] - 1) / 2;
    printf("%lld\n", total);

    return 0;
}
