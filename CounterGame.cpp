#include <iostream>

int main() {
    
    long t; std::cin >> t;
    while(t--){
        uint64_t x; std::cin >> x; --x;
        int ones(0);
        while(x > 0){ones += (x % 2); x /= 2;}
        std::cout << ((ones % 2) ? "Louise" : "Richard") << std::endl;
    }
    
    return 0;
}
