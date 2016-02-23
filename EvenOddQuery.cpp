#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::vector<long> a(n, 0);
    for(long p = 0; p < n; p++){std::cin >> a[p];}
    
    long q; std::cin >> q;
    while(q--){
        long x, y; std::cin >> x >> y;
        --x; --y;
        //std::cout << x << ": " << a[x] << "   " << y << ": " << a[y] << " ";
        if((x > y) || (a[x] % 2) || (x < y && a[x + 1] == 0)){std::cout << "Odd" << std::endl;}
        else{std::cout << "Even" << std::endl;}
    }

    return 0;
}
