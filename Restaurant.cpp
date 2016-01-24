#include <iostream>

int gcd(int a, int b){return (a > 0) ? gcd(b % a, a) : b;}

int main(){

    int t; std::cin >> t;
    while(t--){
        int x, y; std::cin >> x >> y;
        int count = (x / gcd(x, y)) * (y / gcd(x, y));
        std::cout << count << std::endl;
    }

    return 0;
}
