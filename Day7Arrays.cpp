#include <iostream>
#include <vector>

int main(){
    
    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    for(int p = n - 1; p >= 0; p--){std::cout << a[p] << " ";}
    std::cout << std::endl;
    return 0;
}
