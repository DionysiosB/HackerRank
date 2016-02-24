#include <iostream>
#include <vector>

int main(){

    const long MOD = 1000000007;

    int t; std::cin >> t;
    while(t--){

        int n, m; std::cin >> n >> m;
        --m;  //Has to start with 1;
        if(m < 0){std::cout << "0" << std::endl; continue;}

        std::vector<std::vector<long> > count(n + 1, std::vector<long>(m + 1, 0));
        for(int row = 1; row <= n; row++){count[row][0] = 1;}
        for(int col = 1; col <= m; col++){count[0][col] = 1;}
        for(int row = 1; row <= n; row++){
            for(int col = 1; col <= m; col++){
                count[row][col]= count[row - 1][col] + count[row][col - 1];
                count[row][col] %= MOD;
            }
        }

        std::cout << count[n][m] << std::endl;
    }

    return 0;
}
