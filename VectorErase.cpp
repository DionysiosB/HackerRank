#include <iostream>
#include <vector>

int main() {
    
    std::ios_base::sync_with_stdio(false);
    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    
    int x; std::cin >> x; a.erase(a.begin() + x - 1);
    int y; std::cin >> x >> y; a.erase(a.begin() + x - 1, a.begin() + y - 1);
    
    std::cout << a.size() << std::endl;
    for(int p = 0; p < a.size(); p++){std::cout << a[p] << " ";}
    std::cout << std::endl;
    
    return 0;
}

