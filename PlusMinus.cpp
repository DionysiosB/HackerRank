#include <cstdio>

int main() {
    
    int n; scanf("%d\n", &n);
    int neg(0), zero(0), pos(0);
    for(int p = 0; p < n; p++){
        int a; scanf("%d", &a);
        if(a < 0){++neg;}
        else if(a == 0){++zero;}
        else if(a > 0){++pos;}
    }
    
    printf("%.7lf\n%.7lf\n%.7lf\n", (1.0 * pos / n), (1.0 * neg / n), (1.0 * zero / n));
    
    return 0;
}
