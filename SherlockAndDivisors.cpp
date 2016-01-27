#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        int64_t n; std::cin >> n;
        int64_t count(0);
        for(int64_t p = 1; p * p <= n; p++){
            if(n % p != 0){continue;}
            if(p % 2 == 0){++count;}
            if(p * p != n && (n / p) % 2 == 0){++count;}
        }


        std::cout << count << std::endl;
    }

    return 0;
}
