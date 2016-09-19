#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, d; scanf("%ld %ld\n", &n, &d);
    std::set<long> a;
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a.insert(x);}
    long total(0);
    for(std::set<long>::iterator setIter = a.begin(); setIter != a.end(); setIter++){
        long x = *setIter;
        if(a.count(x + d) > 0 && a.count(x + 2 * d) > 0){++total;}
    }

    printf("%ld\n", total);

    return 0;
}
