#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    
    long q; scanf("%ld", &q);
    while(q--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<long> > m(n, std::vector<long>(n, 0));
        for(long row = 0; row < n; row++){for(long col = 0; col < n; col++){scanf("%ld", &m[row][col]);}}
        std::vector<long> rowsum(n, 0), colsum(n, 0);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                rowsum[row] += m[row][col]; colsum[col] += m[row][col];
            }
        }
        
        sort(rowsum.begin(), rowsum.end());
        sort(colsum.begin(), colsum.end());
        bool possible(true);
        for(long p = 0; p < n; p++){if(rowsum[p] != colsum[p]){possible = false; break;}}
        puts(possible ? "Possible" : "Impossible");
    }
    
    return 0;
}
