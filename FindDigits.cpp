#include <cstdio>

int main() {
    
    int T(0); scanf("%d", &T);
    
    while(T--){
    
        long long N(0); scanf("%lld", &N);
        long long last(N);
        
        int total(0);
        while(last > 0){
            int digit = last % 10; last /= 10;
            if(digit > 0  && N % digit == 0){++total;}
        }
        
        printf("%ld\n", total);
    }
    
    return 0;
}
