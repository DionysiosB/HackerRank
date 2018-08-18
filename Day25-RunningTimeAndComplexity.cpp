#include <cstdio>
#include <iostream>

bool checkPrime(int64_t x){
    if(x <= 1){return false;}
    if(x > 2 && x % 2 == 0){return false;}  //Small optimization;
    for(int64_t p = 3; p * p <= x; p += 2){if(x % p == 0){return false;}}
    return true;
}


int main(){

    int t; scanf("%d", &t);
    while(t--){
        int64_t n; scanf("%lld", &n);
        puts(checkPrime(n) ? "Prime" : "Not prime");
    }

    return 0;
}
