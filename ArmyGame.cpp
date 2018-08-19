#include <iostream>

int main(){
    
    int n, m; std::cin >> n >> m;
    std::cout << ((n + n % 2)*(m + m % 2) / 4) << std::endl;
    
    return 0;
}
