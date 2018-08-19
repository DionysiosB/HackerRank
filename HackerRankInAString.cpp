#include <iostream>

int main() {
    
    const std::string h = "hackerrank";
    
    std::ios_base::sync_with_stdio(false);
    long q; std::cin >> q;
    while(q--){
        std::string t; std::cin >> t;
        int ind(0);
        bool sub(false);
        for(int p = 0; p < t.size(); p++){
            if(t[p] == h[ind]){++ind;}
            if(ind == h.size()){sub = true; break;}
        }
        
        std::cout << (sub ? "YES" : "NO") << std::endl;
    }
    
    return 0;
}
