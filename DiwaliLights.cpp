#include <cstdio>

int main() {
    
    int T(0); scanf("%d\n", &T);
    while(T--){
        int N(0); scanf("%d", &N);
        long total(1);
        for(int k = 0; k < N; k++){total *= 2; total %= 100000;}
        printf("%ld\n", total - 1);
    }
    return 0;
}
