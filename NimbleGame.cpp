#include <cstdio>

int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x(0);
        for(long p = 0; p < n; p++){
            long c; scanf("%ld", &c);
            if(c & 1){x ^= p;}
        }
        
        puts(x ? "First" : "Second");
    }
    
    
    return 0;
}
