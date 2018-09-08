#include <iostream>
#include <vector>
#include <map>

int main(){

    const long N = 26;
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long n = s.size();
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){a[p] = s[p] - 'a';}
        std::map<std::vector<long>, long> m;

        long total(0);
        for(long left = 0; left < n; left++){
            for(long right = left; right < n; right++){
                std::vector<long> cur(N, 0);
                for(long x = left; x <= right; x++){++cur[a[x]];}
                total += m[cur]; ++m[cur];
            }
        }

        printf("%ld\n", total);
    }

    return 0;
}
