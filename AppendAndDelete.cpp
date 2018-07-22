#include <iostream>

int main(){

    std::string s, t; std::cin >> s >> t;
    int k; std::cin >> k;

    int common(0);
    for(int p = 0; p < s.size() && p < t.size(); p++){
        if(s[p] != t[p]){break;}
        ++common;
    }

    int diff = s.size() + t.size() - 2 * common;
    bool possible = (s.size() + t.size() <= k) || ((s.size() + t.size() - 2 * common <= k) && ((k - s.size() - t.size() + 2 * common) % 2 == 0));
    std::cout << (possible ? "Yes" : "No") << std::endl;

    return 0;
}
