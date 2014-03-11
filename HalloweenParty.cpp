#include <cstdio>

int main(){

    int numCases(0); scanf("%d\n", &numCases);

    while(numCases--){
        long long cuts(0); scanf("%lld\n", &cuts);
        printf("%lld\n", (cuts / 2) * (cuts - cuts / 2));
    }
    return 0;
}
