#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long total(1);
    for(size_t p = 0; p < s.size(); p++){
        if('A' <= s[p] && s[p] <= 'Z'){++total;}
    }

    std::cout << total << std::endl;

    return 0;
}
