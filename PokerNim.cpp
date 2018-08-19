#include<cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long x(0);
        while(n--){long c; scanf("%ld", &c); x ^= c;}
        puts(x ? "First" : "Second");
    }
    
    return 0;
}
