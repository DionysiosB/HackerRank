#include <iostream>
#include <sstream>

int main() { 
    
    int t; std::cin >> t;
 
    while(t--){
        std::string s; std::cin >> s;
        std::string t("");
        int64_t a(0);
        bool found(false);
        for(int p = 0; p < s.size() - 1 ; p++){
            t.push_back(s[p]);
            std::stringstream ss;
            std::string res = t;
            ss << t; ss >> a;
            int64_t ans = a;
            while(res.length() < s.length()){res.append(std::to_string(++a));}
            
            if(res == s){
                found = true;
                std::cout << "YES " << ans << std::endl; 
                break;
            }          
        }
        
        if(!found){std::cout << "NO " << std::endl;}
    }
    
    return 0;
}
