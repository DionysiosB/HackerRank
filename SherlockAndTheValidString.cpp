#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    const long N = 26;
    std::vector<long> a(N, 0);
    std::string s; std::cin >> s;
    for(long p = 0; p < s.size(); p++){++a[s[p] - 'a'];}
    std::vector<long> b;
    for(long p = 0; p < N; p++){if(a[p] > 0){b.push_back(a[p]);}}
    sort(b.begin(), b.end());

    bool valid = (b.size() <= 1) || (b[0] == 1 && b[1] == b.back()) || (b[0] == b[b.size() - 2] && b.back() <= b[0] + 1);
    std::cout << (valid ? "YES" : "NO") << std::endl;

    return 0;
}
