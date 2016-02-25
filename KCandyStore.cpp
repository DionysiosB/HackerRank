#include <iostream>
#include <vector>

int64_t binomial(int64_t n, int64_t k, int64_t MOD){

    std::vector<std::vector<int64_t> > choose(n + 1, std::vector<int64_t>(k + 1, 0));
    for(int64_t row = 0; row <= n; row++){choose[row][0] = 1;}
    for(int64_t row = 1; row <= n; row++){
        for(int64_t col = 1; col <= k; col++){
            choose[row][col] = choose[row - 1][col - 1] + choose[row - 1][col];
            choose[row][col] %= MOD;
        }
    }

    return choose[n][k];
}


int main(){

    const long M = 1000000000;

    int t; std::cin >> t;
    while(t--){
        int n, k; std::cin >> n >> k;
        std::cout << binomial(k + n - 1, n - 1, M) << std::endl;
    }

    return 0;
}
