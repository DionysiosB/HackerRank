#include <cstdio>


long long modProduct(long start, long finish, long prime){
    long long output(1);
    for(long k = start; k <= finish; k++){output *= k; output %= prime;}
    return output;
}

long modInverse(long a, long prime){

    long s(0), sOld(1), t(1), tOld(0), r(prime), rOld(a), temp(0);

    while(r != 0){
        long q = rOld / r;
        temp = r; r = rOld - q * r; rOld = temp;
        temp = s; s = sOld - q * s; sOld = temp;
        temp = t; t = tOld - q * t; tOld = temp;
    }

    return sOld;
}

int main(){

    int T(0); scanf("%d", &T);
    const long long P = 1000000007;

    while(T--){

        long m(0), n(0); scanf("%ld %ld", &m, &n);

        long long first = modProduct(m, m + n - 2, P);
        long long second = modProduct(1, n - 1, P);
        long long secondInv = (P + modInverse(second,P)) % P;

        printf("%lld\n", (first * secondInv) % P);
    }

    return 0;
}
