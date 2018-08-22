#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    long total(0), most(0);
    for(long p = 0; p < n; p++){
        scanf("%ld", &a[p]); 
        total += a[p];
        most = (most > a[p]) ? most : a[p];
    }

    std::vector<long> div;
    for(long p = 1; p * p <= total; p++){
        if(total % p != 0){continue;}
        div.push_back(p);
        if(p * p != total){div.push_back(total / p);}
    }

    std::vector<long> v;
    for(long p = 0; p < div.size(); p++){
        long cand = div[p];
        if(cand < most){continue;}
        long cur(0), possible(true);
        for(long k = 0; k < n; k++){
            cur += a[k];
            if(cur == cand){cur = 0;}
            else if(cur > cand){possible = false; break;}
        }

        if(possible && (cur == 0)){v.push_back(cand);}
    }

    sort(v.begin(), v.end());
    for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}; puts("");

    return 0;
}
