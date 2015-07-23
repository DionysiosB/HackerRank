#include <cstdio>
#include <iostream>


bool isPalindrome(std::string s){

    bool ans(1);
    for(int p = 0; p < s.size(); p++){if(s[p] != s[s.size() - 1 - p]){return 0;}}
    return 1;
}


int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        std::string s; getline(std::cin, s);
        long n = s.size();
        long ans(-1);
        for(long p = 0; p < s.size() / 2; p++){
            if(s[p] == s[n - 1 - p]){continue;}
            else if(s[p + 1] == s[n - 1 - p] && isPalindrome(s.substr(p + 1, n - 2 * p - 1))){ans = p; break;}
            else if(s[p] == s[n - 2 - p] && isPalindrome(s.substr(p, n - 2 * p - 1))){ans = n - 1 - p; break;}
        }

        std::cout << ans << std::endl;
    }

    return 0;
}
