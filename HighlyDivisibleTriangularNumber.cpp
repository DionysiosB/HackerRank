#include <cstdio>
#include <map>

int main() {
    
    const long long B = 1000;
    
    std::map<long long, long long> m;
    for(long long p = 1; p <= 5e4; p++){
        long long num = p * (p + 1) / 2;
        
        long cnt(0);
        for(long long u = 1; u * u <= num; u++){
            if(num % u){continue;}
            cnt += 1 + (u * u != num);
        }
        
        m[num] = cnt;
        if(cnt > B){break;}
    }
    
    
    long t; scanf("%ld", &t);
    while(t--){
        
        long n; scanf("%ld", &n);
        long long ans(0);
        for(std::pair<long long, long long> kv : m){if(kv.second > n){ans = kv.first; break;}}
        
        printf("%lld\n", ans);
        
    }
    
    return 0;
}

