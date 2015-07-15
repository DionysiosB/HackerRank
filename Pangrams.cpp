#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    std::string s; getline(std::cin, s);
    std::vector<bool> present(N, 0);
    for(int p = 0; p < s.size(); p++){
        if(s[p] == ' '){continue;}
        if('A' <= s[p] && s[p] <= 'Z'){s[p] += 'a' - 'A';}
        present[s[p] - 'a'] = 1;
    }

    std::string ans = "pangram";
    for(int p = 0; p < N; p++){if(!present[p]){ans = "not pangram"; break;}}
    std::cout << ans << std::endl;

    return 0;
}
