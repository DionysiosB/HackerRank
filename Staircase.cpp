#include <cstdio>

int main() {
    
    int n; scanf("%d\n", &n);
    for(int p = 1; p <= n; p++){
        for(int q = 0; q < n - p; q++){printf(" ");}
        for(int q = n - p; q < n; q++){printf("#");}
        puts("");
    }
    
    return 0;
}
