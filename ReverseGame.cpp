#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        long ans(0);
        if(k < n / 2){ans = 2 * k + 1;}
        else{ans = 2 * (n - 1 - k);}
        std::cout << ans << std::endl;
    }

    return 0;
}
