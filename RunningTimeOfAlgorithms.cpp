#include <cstdio>
#include <set>
#include <algorithm>
#include <iterator>

int main(){

    long n; scanf("%ld", &n);
    std::multiset<long> s;
    long cnt(0);
    while(n--){
        long x; scanf("%ld", &x);
        long diff = std::distance(std::upper_bound(s.begin(), s.end(), x), s.end());
        cnt += diff;
        s.insert(x);
    }

    printf("%ld\n", cnt);


    return 0;
}
