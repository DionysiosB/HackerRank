#include <sstream>
#include <vector>
#include <iostream>

std::vector<int> parseInts(std::string str) {
    std::stringstream ss(str);
    std::vector<int> out;
    char c; int token;
    ss >> token; out.push_back(token);
    while(ss >> c) {ss >> token; out.push_back(token);}
    return out;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}
