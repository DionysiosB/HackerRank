#include <cstdio>

int main(){

    int n; scanf("%d", &n);
    int x, y; scanf("%d %d", &x, &y);
    bool horizontal(true), vertical(true);
    while(--n){
        int a, b; scanf("%d %d", &a, &b);
        if(a != x){vertical = false;}
        if(b != y){horizontal = false;}
    }

    puts((horizontal || vertical) ? "YES" : "NO");

    return 0;
}
