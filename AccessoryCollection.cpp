#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll L, A, N, D; scanf("%lld %lld %lld %lld", &L, &A, &N, &D);

        if(N < D || N > L){puts("SAD"); continue;}
        if(D == 1){printf("%lld\n", L * A); continue;}

        ll mx = 0;
        ll middleMax = (N - 1) / (D - 1);
        for (ll p = middleMax; p >= 1; p--){
            ll ch = N + (p - 1) - p * (D - 1);
            ll n = (L - ch) / p;
            ll cl = (L - ch) % p;
            if((n > A - 1) || ((n == A - 1) && (cl > 0))){break;}
            ll sum = A * ch + p * (A - 1 + A - n) * n / 2 + cl * (A - n - 1);
            if (sum <= mx){break;}
            mx = sum;
        }
        if(mx){printf("%lld\n", mx);} else{puts("SAD");}
    }

    return 0;
}
