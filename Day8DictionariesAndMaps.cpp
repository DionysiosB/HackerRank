#include <iostream>
#include <cstdio>
#include <map>

int main() {
    
    int n; std::cin >> n;
    std::map<std::string, std::string> m;
    while(n--){
        std::string name, number; std::cin >> name >> number;
        m[name] = number;
    }
    scanf("\n");
    
    std::string q;
    while(getline(std::cin, q)){
        if(m.count(q) > 0){std::cout << q << "=" << m[q] << std::endl;}
        else{std::cout << "Not found" << std::endl;}
    }
    
    return 0;
}
