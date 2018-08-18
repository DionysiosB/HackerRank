#include <iostream>
#include <map>

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::map<std::string, long> m;
    long q; std::cin >> q;
    while(q--){
        long t; std::string s; std::cin >> t >> s;
        if(t == 1){
            long u; std::cin >> u;
            if(m.count(s) > 0){m[s] += u;}
            else{m.insert(std::make_pair(s, u));}
        }
        else if(t == 2){m.erase(s);}
        else if(t == 3){
            long r = (m.count(s) > 0) ? m[s] : 0;
            std::cout << r << std::endl;
        }
    }
    
    return 0;
}
