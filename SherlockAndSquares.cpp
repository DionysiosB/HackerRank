#include <cstdio>
#include <cmath>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long a, b; scanf("%ld %ld\n", &a, &b);
        long start = sqrt(a);
        long end = sqrt(b) + 1;
        long count(0);
        for(long p = start; p <= end; p++){if(a <= p * p && p * p <= b){++count;}}
        printf("%ld\n", count);
    }

    return 0;
}
