#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::pair<long, std::string> > a(n);
    for(long p = 0; p < n; p++){
        std::string x; std::cin >> x;
        a[p] = std::make_pair(x.size(), x);
    }

    sort(a.begin(), a.end());
    for(long p = 0; p < n; p++){std::cout << a[p].second << std::endl;}

    return 0;
}
