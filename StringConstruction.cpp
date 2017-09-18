#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    int n; std::cin >> n;
    while(n--){
        std::string s; std::cin >> s;
        std::vector<bool> present(N, 0);
        for(size_t p = 0; p < s.size(); p++){present[s[p] - 'a'] = 1;}
        long ans(0);
        for(long p = 0; p < N; p++){ans += present[p];}
        std::cout << ans << std::endl;
    }

    return 0;
}
