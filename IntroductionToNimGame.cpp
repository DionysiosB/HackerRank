#include <cstdio>

int main(){

    long g; scanf("%ld", &g);
    while(g--){
        long n; scanf("%ld", &n); 
        long par(0);
        for(int p = 0; p < n; p++){long h; scanf("%ld", &h); par ^= h;}
        puts(par ? "First" : "Second");
    }
    
    return 0;
}
