#include <cstdio>

int main() {
    
    int T(0); scanf("%d", &T);
    
    while(T--){
        long N(0); scanf("%ld", &N);
        int output(0);
        if(N <= 2){puts("-1");}
        else if(N % 2 == 1){puts("2");}
        else if(N % 4 == 0){puts("3");}
        else if(N % 4 == 2){puts("4");}
    }
    
    return 0;
}
