#include <iostream>

int main() {
    
    int n; std::cin >> n;
    while(n--){
        std::string s; std::cin >> s;
        std::string u(""), v("");
        for(size_t p = 0; p < s.size(); p++){((p % 2) ? v : u) += s[p];}
        std::cout << u << " " << v << std::endl;
    }
    
    return 0;
}
