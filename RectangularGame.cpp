#include <cstdio>

int main(){

    int n; scanf("%d", &n);
    long long minX(1e6 + 1), minY(1e6 + 1);
    while(n--){
        long long a, b; scanf("%lld %lld", &a, &b);
        minX = (minX < a) ? minX : a;
        minY = (minY < b) ? minY : b;
    }

    printf("%lld\n", minX * minY);

    return 0;
}
