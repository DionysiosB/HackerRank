#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    std::string s, t; std::cin >> s >> t;
    std::vector<long> count(N, 0);
    for(long p = 0; p < s.size(); p++){++count[s[p] - 'a'];}
    for(long p = 0; p < t.size(); p++){--count[t[p] - 'a'];}

    long total(0);
    for(long p = 0; p < N; p++){total += std::abs(count[p]);}
    std::cout << total << std::endl;

    return 0;
}
