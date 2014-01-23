#include <cstdio>

int main() {
    
    int dummy;
    int T(0); dummy = scanf("%d", &T);
    
    while(T--){
    
        long N(0); dummy = scanf("%ld", &N);
        long * price = new long[N];
        long * futureMax = new long[N];
        for(int k = 0; k < N; k++){dummy = scanf("%ld", price + k);}
        
        long currentMax = price[N - 1]; 
        for(int k = N - 1; k >= 0; k--){
            if(price[k] > currentMax){currentMax = price[k];}
            futureMax[k] = currentMax;
        }
        
        long profit(0);
        for(int k = 0; k < N; k++){if(price[k] < futureMax[k]){profit += futureMax[k] - price[k];}}
        printf("%ld\n", profit);
    
    
        delete[] price;
        delete[] futureMax;
        
    }
    
    return 0;
}
