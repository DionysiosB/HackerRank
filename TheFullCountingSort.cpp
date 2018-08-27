#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int64_t n; std::cin >> n;
    std::vector<std::pair<int64_t, std::string> > a(n);
    for(int64_t p = 0; p < n; p++){
        int64_t x; std::string s; std::cin >> x >> s;
        if(2 * p < n){s = '-';}
        a[p] = std::make_pair(n * x + p, s);
    }
    sort(a.begin(), a.end());
    for(long p = 0; p < n; p++){std::cout << a[p].second << " ";}
    std::cout << std::endl;

    return 0;
}
