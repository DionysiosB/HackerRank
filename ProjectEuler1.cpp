#include <cstdio>
#include <iostream>

int64_t seriesSum(int64_t x){return x * (x + 1) / 2;}

int64_t multiplesSum(int64_t x, int64_t y, int64_t bound){
    --bound;
	return x * seriesSum(bound / x) + y * seriesSum(bound / y) - x * y * seriesSum(bound / (x * y));
}

int main(){

    const int a = 3;
    const int b = 5;

    long t; scanf("%ld", &t);
    while(t--){
        int64_t n; scanf("%lld", &n);
        printf("%lld\n", multiplesSum(a, b, n));
    }

	return 0;
}
