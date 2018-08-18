#include <cstdio>
#include <vector>

int main(){

    const int N = 37;
    std::vector<long long> a(N, 0);
    a[0] = 1;
    for(long p = 1; p < N; p++){
        if(p >= 1){a[p] += a[p - 1];}
        if(p >= 2){a[p] += a[p - 2];}
        if(p >= 3){a[p] += a[p - 3];}
    }

    int s; scanf("%d", &s);
    while(s--){int u; scanf("%d", &u); printf("%lld\n", a[u]);}

    return 0;
}
