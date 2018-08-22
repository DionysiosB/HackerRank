#include <cstdio>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long g = gcd(a, b);
        puts( ( ((c <= a) || (c <= b)) && (c % g == 0)) ? "YES" : "NO");
    }
    
    return 0;
}
