#include <iostream>
#include <set>

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::set<long> s;
    
    int n; std::cin >> n;
    while(n--){
        int q, a; std::cin >> q >> a;
        if(q == 1){s.insert(a);}
        else if(q == 2){s.erase(a);}
        else if(q == 3){std::cout << ((s.count(a) > 0) ? "Yes": "No") << std::endl;}
    }
    
    return 0;
}
