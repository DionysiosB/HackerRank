#include <cstdio>
#include <vector>
#include <iostream>

long getMid(const std::vector<long> &v, long l, long r, int64_t goal){

    int64_t cs(0);
    for(long p = l; p < r; p++){
        cs += v[p];
        if(cs == goal){return p;}
        else if(cs > goal){return -1;}
    }
    return -1;
}

long getScore(const std::vector<long> &v, long l, long r, int64_t total){

    if(l + 1>= r || total % 2 == 1){return 0;}
    long mid = getMid(v, l, r, total / 2) + 1;
    if(mid > 0){
        long left = getScore(v, l, mid, total / 2);
        long right = getScore(v, mid, r, total / 2);
        return (1 + ((left > right) ? left : right));
    }
    
    return 0;
}

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long n; scanf("%ld\n", &n);
        std::vector<long> v(n);
        int64_t total(0);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]); total += v[p];}
        std::cout << getScore(v, 0, n, total) << std::endl;
    }

    return 0;
}
