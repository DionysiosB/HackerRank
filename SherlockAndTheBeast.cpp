#include <cstdio>

int main() {
    
    int T(0); scanf("%d", &T);
    
    while(T--){
    
        long N(0); scanf("%ld", &N);
        
        long threes(-1), fives(-1);
        for(long k = 0; 5 * k <= N; k++){if((N - 5 * k) % 3 == 0){threes = 5 * k; fives = N - 5 * k; break;}}
        
        if(threes < 0 && fives < 0){puts("-1");}
        else{
            for(int k = 0; k < fives; k++){printf("5");}
            for(int k = 0; k < threes; k++){printf("3");}
            puts("");
        }
    
    }


    return 0;
}
