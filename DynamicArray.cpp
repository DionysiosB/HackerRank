#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, q; std::cin >> n >> q;
    std::vector<std::vector<long> > a(n);
    
    long lastAns = 0;
    while(q--){
        long u, x, y; std::cin >> u >> x >> y;
        x ^= lastAns; x %= n; 
        if(u == 1){a[x].push_back(y);}
        else if(u == 2){
            lastAns = a[x][y % a[x].size()];
            std::cout << lastAns << std::endl;
        }
    }

    return 0;
}
