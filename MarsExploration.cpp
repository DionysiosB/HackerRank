#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long total(0);
    for(size_t p = 0; p < s.size(); p++){
        total += (p % 3 != 1 && s[p] != 'S') || (p % 3 == 1 && s[p] != 'O');
    }

    std::cout << total << std::endl;

    return 0;
}
