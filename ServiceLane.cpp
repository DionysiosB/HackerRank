#include <cstdio>
#include <iostream>

int main() {
    
    int discard(0);
    long N(0), T(0); discard = scanf("%ld %ld", &N, &T);
    int *width = new int[N];
    
    for(long k = 0; k < N; k++){discard = scanf("%d", width + k);}
    
    long enter(0), exit(0); int currentMin(3);
    
    while(T--){
        currentMin = 3; 
        discard = scanf("%ld %ld", &enter, &exit);
        for(long k = enter; k <= exit; k++){
            currentMin = std::min(currentMin, width[k]);
            if(currentMin == 1){break;}
        }
        printf("%d\n", currentMin);
    }
    
    return 0;
}
