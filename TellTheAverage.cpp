#include <iostream>

int main(){

    const int64_t MOD = 1000000007;
    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    int64_t prod(1);
    for(long p = 0; p < n; p++){
        int64_t a; std::cin >> a;
        prod *= (1 + a); prod %= MOD;
    }

    prod = (prod - 1 + MOD) % MOD;
    std::cout << prod << std::endl;

    return 0;
}
