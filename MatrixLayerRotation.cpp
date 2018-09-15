#include <cstdio>
#include <vector>

int main(){

    long n, m, r; scanf("%ld %ld %ld", &n, &m, &r);
    std::vector<std::vector<long> > f(n, std::vector<long>(m, 0));
    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){scanf("%ld", &f[row][col]);}}

    for(long y = 0; 2 * y < n && 2 * y < m; y++){
        std::vector<long> v;
        for(long col = y; col < m - 1 - y; col++){v.push_back(f[y][col]);}
        for(long row = y; row < n - 1 - y; row++){v.push_back(f[row][m - 1 - y]);}
        for(long col = m - 1 - y; col > y; col--){v.push_back(f[n - 1 - y][col]);}
        for(long row = n - 1 - y; row > y; row--){v.push_back(f[row][y]);}

        long s = r % v.size();
        std::vector<long> w(v.size(), 0);

        for(long p = 0; p < v.size(); p++){w[p] = v[(p + s) % v.size()];}

        long ind(0);
        for(long col = y; col < m - 1 - y; col++){f[y][col] = w[ind++];}
        for(long row = y; row < n - 1 - y; row++){f[row][m - 1 - y] = w[ind++];}
        for(long col = m - 1 - y; col > y; col--){f[n - 1 - y][col] = w[ind++];}
        for(long row = n - 1 - y; row > y; row--){f[row][y] = w[ind++];}
    }

    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){printf("%ld ", f[row][col]);}; puts("");}
    return 0;
}
