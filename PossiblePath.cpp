#include <iostream>

int64_t gcd(int64_t a, int64_t b){return (b == 0) ? a : gcd(b, a % b);}

int main() {
    
    long t; std::cin >> t;
    while(t--){
        int64_t a, b, x, y; std::cin >> a >> b >> x >> y;
        int64_t gab = gcd(a, b);
        int64_t gxy = gcd(x, y);
        std::cout << ((gab == gxy) ? "YES" : "NO") << std::endl;
    }
    
    return 0;
}
