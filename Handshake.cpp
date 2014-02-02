#include <cstdio>

int main() {
    
    int T(0); scanf("%d", &T);
    while(T--){long N(0); scanf("%ld", &N); printf("%ld\n", N * (N - 1) / 2);}
    return 0;
}
