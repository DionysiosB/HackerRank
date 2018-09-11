#include <cstdio>
typedef long long ll;

ll f(ll x){
    ll r = x % 8;
    if(r <= 1){return x;}
    else if(r <= 3){return 2;}
    else if(r <= 5){return x + 2;}
    else if(r <= 7){return 0;}

    return 0;
}

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        ll l, r; scanf("%lld %lld", &l, &r);
        printf("%lld\n", f(r) ^ f(l - 1));
    }

    return 0;
}
