#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> s(m);
    for(long p = 0; p < m; p++){scanf("%ld", &s[p]);}
    sort(s.begin(), s.end());
    long maxDist = s[0] > (n - 1 - s[m - 1]) ? s[0] : (n - 1 - s[m - 1]);
    for(long p = 1; p < m; p++){
        long dist = (s[p] - s[p - 1]) / 2;
        maxDist = (maxDist > dist) ? maxDist : dist;
    }

    printf("%ld\n", maxDist);

    return 0;
}
