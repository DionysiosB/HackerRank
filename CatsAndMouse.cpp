#include <cstdio>

int main() {
    
    int q; scanf("%d", &q);
    while(q--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long distA = (a > c) ? (a - c) : (c - a);
        long distB = (b > c) ? (b - c) : (c - b);
        if(distA == distB){puts("Mouse C");}
        else{puts((distA < distB) ? "Cat A" : "Cat B");}
    }
    
    return 0;
}
