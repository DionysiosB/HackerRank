#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long p = 0; 
    while(s.size() > 0 && p < s.size()){
        if(p + 1 < s.size() && s[p] == s[p + 1]){
            s.erase(p, 2); 
            if(p > 0){--p;}
        }
        else{++p;}
    }

    if(s.size() == 0){s = "Empty String";}
    
    std::cout << s << std::endl;

    return 0;
}
