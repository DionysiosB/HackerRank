#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main() {

    long n; std::cin >> n;
    std::vector<std::string> v(n);
    for(long p = 0; p < n; p++){std::cin >> v[p];}
    sort(v.begin(), v.end());
        
    std::map<std::string, long> m;
    for(long p = 0; p < n; p++){
        long score(0);
        for(unsigned u = 0; u < v[p].size(); u++){score += v[p][u] - 'A' + 1;}
        score *= (p + 1);
        m[v[p]] = score;
    }
        
    long q; scanf("%ld", &q);
    while(q--){
        std::string x; std::cin >> x;
        std::cout << m[x] << std::endl;
    }

    return 0;
}
