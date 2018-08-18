#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(int p = 0; p < n; p++){scanf("%ld", &a[p]);}
    
    long q; scanf("%ld", &q);
    while(q--){
        long x; scanf("%ld", &x);
        std::vector<long>::iterator it = std::lower_bound(a.begin(), a.end(), x);
        printf(*it == x ? "Yes": "No");
        printf(" %ld\n", (it - a.begin() + 1));
    }
    
    return 0;
}
