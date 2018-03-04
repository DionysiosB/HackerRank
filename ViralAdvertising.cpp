#include <cstdio>

int main(){

    const int start = 5;
    int n; scanf("%d", &n);
    long long total(0);
    long long f(start);

    for(int p = 0; p < n; p++){f /= 2; total += f; f *= 3;}
    printf("%lld\n", total);

    return 0;
}
