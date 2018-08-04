#include <cstdio>
#include <set>
#include <iterator>

int main(){

    long n; scanf("%ld", &n);
    std::multiset<long> s;
    for(int p = 1; p <= n; p++){
        long x; scanf("%ld", &x); s.insert(x);
        std::multiset<long>::iterator setIter = s.begin();
        std::advance(setIter, (p - 1) / 2);
        long a(*setIter), b(*setIter);
        if(p % 2 == 0){b = *(++setIter);}
        printf("%.1lf\n", (a + b) / 2.0);
    }

    return 0;
}
