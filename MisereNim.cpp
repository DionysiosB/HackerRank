#include <cstdio>

int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long par(0), count(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x); 
            par ^= x;
            count += (par <= 1);
        }
        
        puts( (((count == n) && (par == 1)) || ((count < n) && (par == 0)) ) ? "Second" : "First");
    }
    
    return 0;
}
