#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d", &n);
    std::vector<long long> a(n + 1, 0);
    a[1] = 1;
    for(int p = 2; p <= n; p++){a[p] = a[p - 1] + a[p - 2];}
    printf("%lld\n", a.back());

    return 0;
}
