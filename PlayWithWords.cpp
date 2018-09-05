#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    long n = s.size();
    std::vector<std::vector<long> > f(n, std::vector<long>(n, 0));

    for(long p = 0; p < n; p++){f[p][p] = 1;}
    for(long diag = 1; diag < n; diag++){
        for(long row = 0; row + diag < n; row++){
            long col = row + diag;
            if(s[row] == s[col]){f[row][col] = f[row + 1][col - 1] + 2;}
            else{f[row][col] = (f[row + 1][col] > f[row][col - 1]) ? f[row + 1][col] : f[row][col - 1];}
        }
    }

    long mx(0);
    for(long p = 1; p < n; p++){
        long cand = f[0][p - 1] * f[p][n - 1];
        mx = (mx > cand) ? mx : cand;
    }
    printf("%ld\n", mx);

    return 0;
}
