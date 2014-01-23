#include <cstdio>

int main() {
    
    int dummy(0);
    long N(0); dummy = scanf("%ld", &N);
    long * rating = new long[N];
    long * candies = new long[N];
    for(int k = 0; k < N; k++){dummy = scanf("%ld", rating + k);}
    
    candies[0] = 1; 
    for(int k = 1; k < N; k++){
        if(rating[k - 1] < rating[k]){candies[k] = candies[k - 1] + 1;}
        else{candies[k] = 1;}
    }
    
    for(int k = N - 2; k >= 0; k--){
        if(rating[k] > rating[k + 1] && candies[k] <= candies[k + 1]){candies[k] = candies[k + 1] + 1;}
    }
    
    long long total(0);
    for(int k = 0; k < N; k++){total += candies[k];}
    
    printf("%lld\n", total);
    
    delete[] rating; 
    delete[] candies;
    
    return 0;
}
