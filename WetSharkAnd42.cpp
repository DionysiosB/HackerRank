#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int64_t MOD = 1e9 + 7;

    long t; std::cin >> t;
    while(t--){
        int64_t strength; std::cin >> strength;
        int64_t distance(0);
        while(strength > 0){
            long long d = 2 * strength;
            distance += d; distance %= MOD;
            strength = (distance / 42) - ((distance - d) / 42);
        }

        std::cout << distance << std::endl;
    }

    return 0;
}
