#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    int g; std::cin >> g;
    while(g--){
        int n; std::cin >> n;
        std::string s; std::cin >> s;

        bool space(false);
        std::vector<int> count(N, 0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '_'){space = true;}
            else{++count[s[p] - 'A'];}
        }

        bool possible(true);
        for(int p = 0; p < N; p++){if(count[p] == 1){possible = false; break;}}
        if(!space){
            for(int p = 1; p < s.size() - 1; p++){
                if(s[p] != s[p - 1] && s[p] != s[p + 1]){possible = false; break;}
            }
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

    return 0;
}
