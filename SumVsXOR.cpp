#include <iostream>

int main() {
    
    int64_t n; std::cin >> n;
    int64_t total(1);
    while(n > 0){if(n % 2 == 0){total *= 2;}; n /= 2;}
    std::cout << total << std::endl;
    
    return 0;
}
