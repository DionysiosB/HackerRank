#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    const long M = 4294967295; //2^32 - 1
    while(t--){
        long x; scanf("%ld\n", &x);
        printf("%ld\n", x ^ M);
    }

    return 0;
}
