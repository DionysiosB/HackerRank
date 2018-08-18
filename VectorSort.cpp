#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<long> v(n);
    for(int p = 0; p < n; p++){std::cin >> v[p];}
    sort(v.begin(), v.end());
    for(int p = 0; p < n; p++){std::cout << v[p] << " ";}
    std::cout << std::endl;
    
    return 0;
}
