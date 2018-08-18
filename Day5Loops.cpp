#include <cstdio>

int main() {
    
    const int M = 10;
    int n; scanf("%ld", &n);
    for(int p = 1; p <= M; p++){printf("%d x %d = %d\n", n, p, n * p);}
    return 0;
}
