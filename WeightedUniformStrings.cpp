#include <iostream>
#include <set>
#include <vector>

int main() {
    
    std::string s; std::cin >> s;
    std::set<int64_t> t;
    int64_t run(0);
    for(int64_t p = 0; p < s.size(); p++){
        int64_t w = s[p] - 'a' + 1;
        if(p > 0 && s[p] == s[p - 1]){++run;} else {run = 1;}
        t.insert(run * w);
    }

    int64_t n; std::cin >> n;
    while(n--){
        int64_t x; std::cin >> x; 
        std::cout << (t.count(x) ? "Yes" : "No") <<  std::endl;
    }
    
    return 0;
}
