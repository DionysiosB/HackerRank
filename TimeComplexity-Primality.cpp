#include <cstdio>

bool isPrime(long x){

    if(x <= 1){return false;}
    for(long p = 2; p * p <= x; p++){if(x % p == 0){return false;}}
    return true;
}


int main(){

    int t; scanf("%d", &t);
    while(t--){long n; scanf("%ld", &n); puts(isPrime(n) ? "Prime" : "Not prime");}

    return 0;
}
