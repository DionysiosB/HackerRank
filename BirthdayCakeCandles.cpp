#include <cstdio>

int main() {
    
    long n; scanf("%ld", &n);
    long count(0), tower(0);
    while(n--){
        long h; scanf("%ld", &h);
        if(h == tower){++count;}
        else if(h > tower){tower = h; count = 1;}
    }
    
    printf("%ld\n", count);
    
    return 0;
}
