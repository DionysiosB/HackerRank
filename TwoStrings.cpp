#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 26;

    int T; scanf("%d\n", &T);
    while(T--){
        std::string a; getline(std::cin, a);
        std::string b; getline(std::cin, b);
        std::vector<bool> lettersA(N, 0); std::vector<bool> lettersB(N, 0);
        for(int p = 0; p < a.size(); p++){lettersA[a[p] - 'a'] = 1;}
        for(int p = 0; p < b.size(); p++){lettersB[b[p] - 'a'] = 1;}
        std::string ans("NO");
        for(int p = 0; p < N; p++){if(lettersA[p] > 0 && lettersB[p] > 0){ans = "YES"; break;}}
        std::cout << ans << std::endl;
    }


    return 0;
}
