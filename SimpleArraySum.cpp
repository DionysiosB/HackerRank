#include <cstdio>

int main() {
    
    int n; scanf("%d\n", &n);
    long sum(0);
    for(int p = 0; p < n; p++){long temp; scanf("%d", &temp); sum += temp;}
    printf("%ld\n", sum);
    
    
    return 0;
}
