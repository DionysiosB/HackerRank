#include <iostream>

int64_t modExp(int64_t base, int64_t exp, int64_t M){
    if(exp == 0){return 1;}
    if(exp % 2){return ((base % M) * (modExp(base, exp - 1, M) % M) % M);}
    else{int64_t u = (modExp(base, exp / 2, M) % M); return ((u * u) % M);}
    return 0;
}

int main(){

    const int64_t MOD = 1e9 + 7;
    std::ios_base::sync_with_stdio(false);
    int64_t n; std::cin >> n;
    int64_t P(1);
    while(n--){
        int64_t a; std::cin >> a;
        P *= (1 + modExp(2, a, MOD)); P %= MOD;
    }

    P = (P - 1 + MOD) % MOD;
    std::cout << P << std::endl;

    return 0;
}
