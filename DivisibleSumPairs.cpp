#include<cstdio>
#include<vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> count(k, 0);
    while(n--){
        long x; scanf("%ld", &x);
        ++count[x % k];
    }

    long long ans = count[0] * (count[0] - 1) / 2;
    for(long p = 1; p <= k / 2; p++){ans += count[p] * count[k - p];}
    if(k % 2 == 0){ans -= count[k / 2] * (count[k/2] + 1) / 2;}
    printf("%lld\n", ans);

    return 0;
}
