#include <cmath>
#include <iostream>

int main() { 
    
    long t; std::cin >> t;
    while(t--){
        uint64_t a, b, c; std::cin >> a >> b >> c;
        uint64_t d = pow(a,b) + c / 2;
        std::cout << (d - (d % c)) << std::endl;
    }
    
    return 0;
}
