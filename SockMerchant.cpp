#include <cstdio>
#include <vector>

int main(){

    const int N = 100;
    int n; scanf("%d", &n);
    std::vector<int> v(N + 1, 0);
    for(int p = 0; p < n; p++){int x; scanf("%d", &x); ++v[x];}
    long total(0);
    for(int p = 0; p <= N; p++){total += v[p] / 2;}
    printf("%ld\n", total);

    return 0;
}
