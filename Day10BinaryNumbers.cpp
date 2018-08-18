#include <cstdio>

int main() {
    
    long n; scanf("%ld", &n);
    int count(0), maxCount(0);
    while(n > 0){
        if(n % 2){
            ++count;
            maxCount = (maxCount > count) ? maxCount : count;
        }
        else{count = 0;}
        
    }
    
    printf("%d\n", maxCount);
    
    return 0;
}
