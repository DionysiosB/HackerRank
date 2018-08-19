#include <cstdio>
#include <iostream>
#include <set>

int main() {
    
    long n, k; scanf("%ld %ld", &n, &k);
    long qx, qy; scanf("%ld %ld", &qx, &qy);
    std::set<std::pair<long, long> > s;
    while(k--){
        long x, y; scanf("%ld %ld", &x, &y);
        s.insert(std::make_pair(x, y));
    }
    
    long total(0);
    
    for(long p = qy + 1; p <= n; p++){
        std::pair<long, long> test = std::make_pair(qx, p); 
        if(s.count(test) > 0){break;}
        ++total;
    }
    
    for(long p = qy - 1; p > 0; p--){
        std::pair<long, long> test = std::make_pair(qx, p); 
        if(s.count(test) > 0){break;}
        ++total;
    }
    
    for(long p = qx + 1; p <= n; p++){
        std::pair<long, long> test = std::make_pair(p, qy); 
        if(s.count(test) > 0){break;}
        ++total;
    }
    
    for(long p = qx - 1; p > 0; p--){
        std::pair<long, long> test = std::make_pair(p, qy); 
        if(s.count(test) > 0){break;}
        ++total;
    }
    
    for(long p = qx + 1; p <= n; p++){
        long r = qy - qx + p;
        if(r < 1 || r > n){break;}
        std::pair<long, long> test = std::make_pair(p, r); 
        if(s.count(test) > 0){break;}
        ++total;
    }
    
    for(long p = qx - 1; p > 0; p--){
        long r = qy - qx + p;
        if(r < 1 || r > n){break;}
        std::pair<long, long> test = std::make_pair(p, r); 
        if(s.count(test) > 0){break;}
        ++total;
    }
    
    for(long p = qx + 1; p <= n; p++){
        long r = qy + qx - p;
        if(r < 1 || r > n){break;}
        std::pair<long, long> test = std::make_pair(p, r); 
        if(s.count(test) > 0){break;}
        ++total;
    }
    
    for(long p = qx - 1; p > 0; p--){
        long r = qy + qx - p;
        if(r < 1 || r > n){break;}
        std::pair<long, long> test = std::make_pair(p, r); 
        if(s.count(test) > 0){break;}
        ++total;
    }
    
    printf("%ld\n", total);
    
    return 0;
}
