#include <iostream>

int main(){

    const long L = 6;
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long remLength = (s.size() < L) ? (L - s.size()) : 0;

    long digit(1), small(1), capital(1), symbol(1);
    for(long p = 0; p < s.size(); p++){
        if('0' <= s[p] && s[p] <= '9'){digit = 0;}
        if('a' <= s[p] && s[p] <= 'z'){small = 0;}
        if('A' <= s[p] && s[p] <= 'Z'){capital = 0;}
        if('!' <= s[p] && s[p] <= '/'){symbol = 0;}
    }

    long missing = digit + small + capital + symbol;
    long needed = (missing > remLength) ? missing : remLength;
    std::cout << needed << std::endl;

    return 0;
}
