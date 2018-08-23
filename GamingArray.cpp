#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long g; std::cin >> g;
    while(g--){
        long n; std::cin >> n;
        std::vector<std::pair<long, long> > a(n);
        for(long p = 0; p < n; p++){
            long x; std::cin >> x;
            a[p] = std::make_pair(x, p);
        }

        sort(a.rbegin(), a.rend());
        long count(0), last(n + 1);
        for(long p = 0; p < n; p++){if(a[p].second < last){last = a[p].second; ++count;}}
        std::cout << ((count % 2) ? "BOB" : "ANDY") << std::endl;
    }

    return 0;
}
