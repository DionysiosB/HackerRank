#include <cstdio>
#include <vector>
#include <set>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        std::vector<long> a;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(s.count(x) > 0){continue;}
            a.push_back(x);
        }
        
        long g(0);
        for(long p = 0; p < a.size(); p++){g = gcd(a[p], g);}
        puts((g == 1) ? "YES" : "NO");
    }
    
    return 0;
}
