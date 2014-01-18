#include <cstdio>

int main() {
    
    int T(0); scanf("%d", &T);
    long temp(0);
    while(T--){scanf("%ld", &temp); printf("%ld\n", (temp == 0) ? 0 : (temp + 1));}
    return 0;
}
