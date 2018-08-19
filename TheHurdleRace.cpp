#include <cstdio>

int main() {
    
    long n, k; scanf("%ld %ld", &n, &k);
    long maxH(0);
    while(n--){
        long h; scanf("%ld", &h);
        maxH = (maxH > h) ? maxH : h;
    }
    
    printf("%ld\n", (maxH > k) ? (maxH - k) : 0);
    
    return 0;
}
