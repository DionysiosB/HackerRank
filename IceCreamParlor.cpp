#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    int T(0); scanf("%d", &T);
    
    while(T--){
    
        long C(0); scanf("%ld", &C);
        long L(0); scanf("%ld", &L);
        std::vector<std::pair<long,long>> data(L, std::pair<long,long>(0,0));
            
        for(long k = 0; k < L; k++){
            long temp(0); scanf("%ld", &temp);
            data[k] = std::pair<long,long>(temp,k + 1);
        }
        
        std::sort(data.begin(), data.end());
        
        long left(0), right(L - 1);
        while(left < right){
            if(data[left].first + data[right].first < C){++left;}
            else if(data[left].first + data[right].first > C){--right;}
            else if(data[left].first + data[right].first == C){break;}
        }
        
        
        long a = data[left].second;
        long b = data[right].second;
        
        if(a < b){printf("%ld %ld\n", a, b);}
        else{printf("%ld %ld\n", b, a);}
    
    }
    
    return 0;
}
