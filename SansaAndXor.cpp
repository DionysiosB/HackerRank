#include <cstdio>

int main() {
    
    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x); 
            if(p % 2 == 0){res ^= x;}
        }
        
        printf("%ld\n", (n % 2) ? res : 0);
    }
    
    return 0;
}
