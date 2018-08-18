#include <iostream>
#include <cmath>
#include <vector>

long getPrime(long n){

    const long N = 105000;
    std::vector<bool> v(N, 1);
    v[0] = v[1] = 0;
    std::vector<long> a(15); 
    a[0] = 2; a[1] = 3; a[2] = 5; a[3] = 7; a[4] = 11; a[5] = 13; a[6] = 17; a[7] = 19; a[8] = 23; a[9] = 29; a[10] = 31; a[11] = 37; a[12] = 41; a[13] = 43; a[14] = 47;
    if(n <= a.size()){return a[n - 1];}
    long counter = a.size();
    for(long p = 21; p < N; p += 2){
        if(p % 3 == 0 || p % 5 == 0 || p % 7 == 0 || p % 11 == 0 || p % 13 == 0 || p % 17 == 0 || p % 19 == 0){continue;}
        if(p % 23 == 0 || p % 29 == 0 || p % 31 == 0 || p % 37 == 0 || p % 41 == 0 || p % 43 == 0 || p % 47 == 0){continue;}
        if(!v[p]){continue;}
        ++counter;
        if(counter == n){return p;}
        for(long q = 2 * p; q <= N; q += p){v[q] = 0;}
    }

    return 0;
}


int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", getPrime(n));
    }

    return 0;
}
