#include <cstdio>
#include <iostream>

std::pair<int64_t, int64_t> complexMult(std::pair<int64_t, int64_t> a, std::pair<int64_t, int64_t> b, int64_t M){
    
    int64_t re = (((a.first * b.first) % M) - ((a.second * b.second) % M)) % M;
    int64_t im = (((a.first * b.second) % M) + ((a.second * b.first) % M)) % M;
    re = (M + re) % M; im = (M + im) % M;
    return std::make_pair(re, im);
}


std::pair<int64_t, int64_t> modexp(std::pair<int64_t, int64_t> b, int64_t x, int64_t M){
    
    if(x <= 0){return std::make_pair(1, 0);}
    if(x == 1){return b;}
    
    std::pair<int64_t, int64_t> h = modexp(b, x / 2, M);
    std::pair<int64_t, int64_t> sq = complexMult(h, h, M);
    if(x % 2){sq = complexMult(b, sq, M);}
    return sq;
}

int main() {
    
    long q; scanf("%ld", &q);
    while(q--){
        int64_t a, b, k, m; scanf("%lld %lld %lld %lld", &a, &b, &k, &m);
        std::pair<int64_t, int64_t> res = modexp(std::make_pair(a, b), k, m);
        printf("%lld %lld\n", res.first, res.second);
    }
    
    return 0;
}
