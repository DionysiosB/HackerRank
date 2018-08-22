#include <cstdio>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        long diffx = (x1 > x2) ? (x1 - x2) : (x2 - x1);
        long diffy = (y1 > y2) ? (y1 - y2) : (y2 - y1);
        long g = gcd(diffx, diffy);
        printf("%ld\n", g - 1);
    }
    
    return 0;
}
