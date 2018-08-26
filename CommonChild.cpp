#include <iostream>
#include <vector>

int main(){

    std::string s, t; std::cin >> s >> t;
    long n(s.size()), m(t.size());
    std::vector<std::vector<long> > f(n, std::vector<long>(m, 0));

    f[0][0] = (s[0] == t[0]);
    for(long p = 1; p < n; p++){f[p][0] = f[p - 1][0] || (s[p] == t[0]);}
    for(long p = 1; p < m; p++){f[0][p] = f[0][p - 1] || (s[0] == t[p]);}

    for(long row = 1; row < n; row++){
        for(long col = 1; col < m; col++){
            if(s[row] == t[col]){f[row][col] = 1 + f[row - 1][col - 1];}
            else{f[row][col] = (f[row - 1][col] > f[row][col - 1]) ? f[row - 1][col] : f[row][col - 1];}
        }
    }

    //for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){std::cout << f[row][col] << " ";}; std::cout << std::endl;}

    std::cout << f[n - 1][m - 1] << std::endl;

    return 0;
}
