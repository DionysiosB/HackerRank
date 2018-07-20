#include <iostream>
#include <algorithm>

int main(){
    
    const int n = 5;
    std::ios_base::sync_with_stdio(false);
    std::vector<long> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    sort(a.begin(), a.end());
    
    long long m(0), M(0);
    for(int p = 0; p < n; p++){
        if(p < n - 1){m += a[p];}
        if(p > 0){M += a[p];}
    }
    
    std::cout << m << " " << M << std::endl;
    
    return 0;
}
