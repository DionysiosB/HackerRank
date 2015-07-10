#include <cstdio>
#include <iostream>

int main(){

    const int ALPHA = 'z' - 'a' + 1;

    int n; scanf("%d\n", &n);
    std::string s; getline(std::cin, s);
    int k; scanf("%d\n", &k); k %= ALPHA;

    for(int p = 0; p < s.size(); p++){
        if('a' <= s[p] && s[p] <= 'z'){int temp = s[p]; temp += k; if(temp > 'z'){temp += 'a' - 'z' - 1;}; s[p] = temp;}
        if('A' <= s[p] && s[p] <= 'Z'){int temp = s[p]; temp += k; if(temp > 'Z'){temp += 'A' - 'Z' - 1;}; s[p] = temp;}
    }

    std::cout << s << std::endl;

    return 0;
}
