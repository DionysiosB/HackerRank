#include <iostream>

int main(){

    size_t n; std::cin >> n;
    std::string s; std::cin >> s;
    long total(0);
    for(size_t p = 2; p < s.size(); p++){
        if(s[p] == '0' && s[p - 1] == '1' && s[p - 2] == '0'){s[p] = '1'; ++total;}
    }

    std::cout << total << std::endl;

    return 0;
}
