#include <iostream>

const int64_t M = 1000000007;

int main(){

    int t; std::cin >> t;
    while(t--){
        int64_t n; std::cin >> n;
        int64_t ans = ((n % M) * (n % M)) % M;
        std::cout << ans << std::endl;
    }

    return 0;
}
