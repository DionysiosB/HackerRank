#include <cstdio>
#include <cmath>
#include <vector>

int main() {
    
    long T(0); scanf("%ld", &T);
    
    std::vector<long long> fibSeries;
    std::vector<long long> input(T,0);
    
    long long currentMax(0);
    for(long k = 0; k < T; k++){
        scanf("%lld", &input[k]);
        if(input[k] > currentMax){currentMax = input[k];}
    }
        
    long long first(0), second(1), temp(1);
    fibSeries.push_back(first); fibSeries.push_back(second);
    
    while(fibSeries.back() < currentMax){
        temp  = first + second;
        fibSeries.push_back(temp);
        first = second;
        second = temp;
    }


    for(int k = 0; k < fibSeries.size(); k++){printf("%lld\n", fibSeries[k]);}
        
    
    for(long k = 0; k < T; k++){
        for(int m = 0; m < fibSeries.size(); m++){
            if(input[k] == fibSeries[m]){puts("IsFibo"); printf("%lld %lld\n", input[k], fibSeries[m]); break;}
            else if(input[k] < fibSeries[m]){puts("IsNotFibo"); printf("%lld %lld\n", input[k], fibSeries[m]); break;}
        }
    }
    
    return 0;
}
