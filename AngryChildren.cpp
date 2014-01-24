#include <cstdio>

int main() {

    int T(0); int dummy = scanf("%d", &T);
    
    while(T--){
        long N(0), C(0), M(0); dummy = scanf("%ld %ld %ld", &N, &C, &M);
        long total(0), current(N / C), rem(0);
        
        while(true){
            total += current;
            rem += current;
            if(rem < M){break;}
            current = rem / M;
            rem = rem % M;
        }
        printf("%ld\n", total);
    
    }

    return 0;
}
