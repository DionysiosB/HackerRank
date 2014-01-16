#include <cstdio>

int main() {
    
    int V(0), n(0), temp(0), discard(0);
    discard = scanf("%d %d", &V, &n);
    for(int k = 0; k < n; k++){discard = scanf("%d", &temp); if(temp == V){printf("%d\n", k); break;}}
    return 0;
}
