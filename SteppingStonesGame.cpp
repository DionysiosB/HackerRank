#include <iostream>
#include <cmath>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        int64_t n; std::cin >> n;
        int64_t D = 1 + 8 * n;
        int64_t dsq = sqrt(1 + 8 * n);
        if(dsq * dsq == D){
            int64_t a = (-1 + dsq) / 2;
            std::cout << "Go On Bob " << a << std::endl;
        }
        else{std::cout << "Better Luck Next Time" << std::endl;}
    }

    return 0;
}
