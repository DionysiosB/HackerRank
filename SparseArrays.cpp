#include <iostream>
#include <map>

int main(){
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;
    std::map<std::string, int> counts;
    while(n--){
        std::string s; std::cin >> s;
        if(!counts.count(s)){counts[s] = 0;}
        ++counts[s];
    }

    int q; std::cin >> q;
    while(q--){
        std::string t; std::cin >> t;
        if(counts.count(t)){std::cout << counts[t] << std::endl;}
        else{std::cout << "0" << std::endl;}
    }

    return 0;
}
