#include <cstdio>
typedef long long ll;

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        ll x; scanf("%lld", &x);
        ll div(1), total(0);
        while(x > 0){
            if(x % 2 == 0){total += div;}
            x /= 2; div *= 2;
        }

        printf("%lld\n", total);
    }

    return 0;
}
