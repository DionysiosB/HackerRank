#include <cstdio>
#include <vector>

int main() {
    
    long n; scanf("%ld", &n);
    std::vector<long> s(n);
    for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
    std::vector<long> r(n, 1);
    for(long p = 1; p < n; p++){r[p] = r[p - 1] + ((s[p] < s[p - 1]) ? 1 : 0);}
    
    long m; scanf("%ld", &m);
    long ind(n - 1);
    while(m--){
        long a; scanf("%ld", &a);
        while((ind > 0) && s[ind] < a){--ind;}
        printf("%ld\n", (r[ind] + ((a < s[ind]) ? 1 : 0)));
    }
    
    return 0;
}
