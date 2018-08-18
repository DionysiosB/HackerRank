#include <cstdio>
#include <vector>

long getCollatz(long a, std::vector<long> &w){
    if(a == 1){return 1;}
    if(a < w.size() && w[a] > 0){return w[a];}
    long count(0);
    if(a % 2){count = 1 + getCollatz(3 * a + 1, w);}
    else{count = 1 + getCollatz(a / 2, w);}
    if(a < w.size()){w[a] = count;}
    return count;
}

int main(){

    const long N = 10000000;
    std::vector<long> v(N, -1);
    v[0] = 0; v[1] = 1;
    for(long p = 1; p <= N; p++){getCollatz(p, v);}

    long maxLen(0), whichMax(0);
    std::vector<long> which(N, 0);
    for(long p = 1; p <= N; p++){
        if(v[p] >= maxLen){
            maxLen = v[p];
            whichMax = p;
        }
        which[p] = whichMax;
    }

    long t; scanf("%ld", &t);
    while(t--){long n; scanf("%ld", &n); printf("%ld\n", which[n]);}

    return 0;
}
