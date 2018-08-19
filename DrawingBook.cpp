#include <cstdio>

int main() {
    
    long n, p; scanf("%ld %ld", &n, &p);
    long left = (p / 2);
    long right = (n + (n % 2 == 0) - p) / 2;
    printf("%ld\n", (left < right) ? left : right);
    
    return 0;
}
