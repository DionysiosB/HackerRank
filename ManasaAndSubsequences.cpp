#include <iostream>

int main (){

    const int64_t MOD = 1e9 + 7;
    int64_t total(0), index(1);

    std::string s; std::cin >> s;

    for(size_t p = 0; p < s.size(); p++){
        int digit = s[p] - '0';
        total = (11 * total + index * digit) % MOD;
        index *= 2; index %= MOD;
    }

    std::cout << total << std::endl;

    return 0;
}
