#include <cstdio>
#include <iostream>

int64_t largestPrime(int64_t x){

    int64_t ans(1);
    while(x % 2 == 0){x /= 2; ans = 2;}
    for(long p = 3; p * p <= x; p++){
        if(x % p != 0){continue;}
        ans = (ans > p) ? ans : p;
        while(x % p == 0){x /= p;}
    }

    ans = (ans > x) ? ans : x;
    return ans;
}


int main(){
	
    int t; scanf("%d", &t);
    while(t--){
        int64_t n; scanf("%lld", &n);
        printf("%lld\n", largestPrime(n));
    }
    
    return 0;
}
