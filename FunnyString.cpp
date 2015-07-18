#include <cstdio>
#include <iostream>


int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        std::string s; getline(std::cin, s);
        int n = s.size();
        std::string ans = "Funny";
        for(int p = 1; p <= n / 2; p++){
            int a = s[p] - s[p - 1];
            int b = s[n - 1 - p] - s[n - p];
            if(a != b && a != -b){ans = "Not Funny";}
        }
        std::cout << ans << std::endl;
    }

    return 0;
}

