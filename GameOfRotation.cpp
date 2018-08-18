#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::vector<int64_t> a(n);
    int64_t s(0), t(0), max(-1e18);
    for(long p = 0; p < n; p++){std::cin >> a[p]; s += a[p]; t += (p + 1) * a[p];}
    for(long p = n - 1; p >= 0; p--){
        t += s - n * a[p];
        max = (max > t) ? max : t;
    }
    
    std::cout << max << std::endl;

    return 0;
}
