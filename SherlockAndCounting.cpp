#include <iostream>
#include <cmath>

int main(){

    std::ios_base::sync_with_stdio(false);
    long q; std::cin >> q;
    while(q--){
        int64_t n, k; std::cin >> n >> k;
        int64_t D = n * n - 4 * n * k;
        if(D < 0){std::cout << (n - 1) << std::endl; continue;}
        double r1 = (n - sqrt(n * n - 4 * n * k)) / 2.0;
        double r2 = (n + sqrt(n * n - 4 * n * k)) / 2.0;
        int64_t a1(floor(r1)), a2(ceil(r2)), total(0);

        if(a1 > 0){total = a1;}
        if(a2 < n){total += n - a2;}
        if(a1 >= a2){--total;}

        std::cout << total << std::endl;
    }

    return 0;
}
