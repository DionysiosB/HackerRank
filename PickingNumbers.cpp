#include <cstdio>
#include <vector>

int main() {
    
    const int N = 105;
    std::vector<long> a(N, 0);
    long n; scanf("%ld", &n);
    while(n--){int x; scanf("%d", &x); ++a[x];}
    long maxSum(0);
    for(int p = 1; p < N; p++){long sum = a[p - 1] + a[p]; maxSum = (maxSum > sum) ? maxSum : sum;}
    printf("%ld\n", maxSum);
    
    return 0;
}
