#include <iostream>
#include <vector>

int main() {
    
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<long> h(n + 1, 0);
    long valleys(0);
    for(long p = 1; p <= n; p++){
        h[p] = h[p - 1] + ((s[p - 1] == 'U') ? 1 : -1);
        if(h[p] == 0 && h[p - 1] < 0){++valleys;}
    }
        
    printf("%ld\n", valleys);
    
    return 0;
}
