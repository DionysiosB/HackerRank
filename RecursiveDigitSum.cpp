#include <iostream>

long long superdigit(long long x){
    
    if(x < 10){return x;}
    long y(0);
    while(x > 0){y += (x % 10); x /= 10;}
    return superdigit(y);
}


int main() {
    
    std::string s; std::cin >> s;
    long k; std::cin >> k;
    
    int64_t num(0);
    for(long p = 0; p < s.size(); p++){num += (s[p] -'0');}
    num *= k;
    printf("%lld\n", superdigit(num));
    
    return 0;
}
