#include <cstdio>

int main(){
    
    int T; scanf("%d\n", &T);
    while(T--){
        long long B, W; scanf("%lld %lld\n", &B, &W);
        long long X, Y, Z; scanf("%lld %lld %lld\n", &X, &Y, &Z);

        long long ans(0);
        if(X + Z < Y){ans = B * X + W * (X + Z);}
        else if(X > Y + Z){ans = B * (Y + Z) + W * Y;}
        else{ans = B * X + W * Y;}

        printf("%lld\n", ans);
    }

    return 0;
}
