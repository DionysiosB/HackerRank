#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        int64_t b, n, k; std::cin >> n >> k >> b;
        int64_t min = b * (b + 1) / 2;
        int64_t max = b * (2 * k - b + 1) / 2;
        if(n < min || max < n){std::cout << "-1" << std::endl; continue;}
        int64_t global = (n - min) / b;
        int64_t local = (n - min) % b;
        for(int p = 1; p <= b; p++){
            int64_t cur = p + global + (b - p < local);
            std::cout << cur;
            std::cout << ((p < b) ? " " : "\n");
        }
    }

    return 0;
}
