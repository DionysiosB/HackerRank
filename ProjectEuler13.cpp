#include <iostream>
#include <vector>

int main(){

    const int S = 50;
    int n; scanf("%d", &n);
    std::vector<long> a(S, 0);
    for(long p = 0; p < n; p++){
        std::string s; std::cin >> s;
        for(long u = 0; u < S; u++){a[u] += (s[S - 1 - u] - '0');}
    }

    for(long p = 0; p < S - 1; p++){
        a[p + 1] += (a[p] / 10);
        a[p] %= 10;
    }
    while(a.back() > 9){
        int carry = a.back() / 10;
        a.back() %= 10;
        a.push_back(carry);
    }

    for(long p = a.size() - 1; p >= a.size() - 10; p--){std::cout << a[p];}
    std::cout << std::endl;

    return 0;
}
