#include <iostream>
#include <vector>

int main(){

    const uint64_t MOD = (1LL << 31);
    int64_t N, S, P, Q;
    std::cin >> N >> S >> P >> Q;
    int64_t a(S % MOD);
    int64_t count(1);

    std::vector<bool> used(MOD, 0);
    used[a] = 1;

    while(--N){
        a = (a * P + Q) % MOD;
        count += 1 - used[a];
        used[a] = 1;
    }

    std::cout << count << std::endl;

    return 0;
}
