#include <cstdio>

void check(long x, long pow, long m, long &total){
    
    if(x <= 0){return;}
    long u = 1; for(int p = 0; p < pow; p++){u *= m;}
    if(x < u){return;}
    else if(x == u){++total;}
    else{
        check(x, pow, m + 1, total);
        check(x - u, pow, m + 1, total);
    }
    
    return;
}


int main() {
    
    long x, n; scanf("%ld %ld", &x, &n);
    long min(1), count(0);
    check(x, n, min, count);
    printf("%ld\n", count);
    
    return 0;
}
