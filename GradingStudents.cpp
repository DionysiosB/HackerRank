#include <cstdio>

int main() {
    
    int n; scanf("%d", &n);
    while(n--){
        int g; scanf("%d", &g);
        if((g >= 38) && (g % 5 > 2)){printf("%d\n", 5 * (1 + g / 5));}
        else{printf("%d\n", g);}
    }
      
    return 0;
}
