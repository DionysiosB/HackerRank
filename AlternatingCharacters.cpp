#include <iostream>
#include <cstdio>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        std::string s; getline(std::cin, s);
        long count(0);
        for(int p = 1; p < s.size(); p++){if(s[p] == s[p - 1]){++count;}}
        std::cout << count << std::endl;
    }

    return 0;
}
