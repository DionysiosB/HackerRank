#include <cstdio>

int main() {
    
    int N; scanf("%d\n", &N);
    long long sum(0);
    while(N--){
        long long temp; scanf("%lld", &temp);
        sum += temp;
    }
    
    printf("%lld\n", sum);
    
    return 0;
}
