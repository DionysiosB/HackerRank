#include <cstdio>

int main() {
    
    int T(0); scanf("%ld", &T); 
    
    while(T--){
        int N(0); scanf("%d", &N);
        long long height(1);
        
        for(int k = 1; k <= N; k++){
            if(k % 2){height *= 2;}
            else{++height;}
        }
        
        printf("%lld\n", height);
    }
    
    return 0;
}
