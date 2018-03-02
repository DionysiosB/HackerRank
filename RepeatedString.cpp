#include <iostream>
#include <vector>

int main(){

    std::string s; std::cin >> s;
    long long n; std::cin >> n;

    size_t len = s.size();
    std::vector<int> v(1 + len, 0);
    for(size_t p = 1; p <= len; p++){v[p] = v[p - 1] + (s[p - 1] == 'a');}

    long long ans = (n / len) * v[len] + v[n % len];
    printf("%lld\n", ans);

    return 0;
}
