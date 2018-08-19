#include <cstdio>

int main() {
    
    long n; scanf("%ld", &n);
    bool first(1);
    long countLow(0), countHigh(0), lowest(0), highest(0);
    while(n--){
        long s; scanf("%ld", &s);
        if(first){first = 0; lowest = s; highest = s;}
        countLow += (s < lowest);
        countHigh += (s > highest);
        lowest = (lowest < s) ? lowest : s;
        highest = (highest > s) ? highest : s;
    }
    
    printf("%ld %ld\n", countHigh, countLow);
    
    return 0;
}
