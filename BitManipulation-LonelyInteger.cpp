#include <cstdio>

int main(){

    int n; scanf("%d", &n);
    int a(0);
    while(n--){int x; scanf("%d", &x); a ^= x;}
    printf("%d\n", a);

    return 0;
}
