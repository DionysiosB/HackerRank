#include <iostream>
#include <vector>

int main(){

    const long MOD = 1000000007;

    int t; std::cin >> t;
    long R(0), C(0);
    std::vector<std::pair<long, long> > d(t);
    for(int p = 0; p < t; p++){
        long rows, cols; std::cin >> rows >> cols;
        d[p] = std::make_pair(rows, cols);
        if(rows > R){R = rows;}
        if(cols > C){C = cols;}
    }


    std::vector<std::vector<int64_t> > count(R + 1, std::vector<int64_t>(C + 1, 0));
    for(int64_t row = 0; row <= R; row++){count[row][0] = 1;}
    for(int64_t col = 0; col <= C; col++){count[0][col] = 1;}
    for(int64_t row = 1; row <= R; row++){
        for(int64_t col = 1; col <= C; col++){
            count[row][col] = count[row - 1][col] + count[row][col - 1];
            count[row][col] %= MOD;
        }
    }

    for(int p = 0; p < t; p++){std::cout << count[d[p].first - 1][d[p].second - 1] << std::endl;}

    return 0;
}
