#include <iostream>
#include <vector>

int64_t evenSumFib(int64_t upperBound){
	
    if(upperBound <= 2){return 0;}

    const int N = 1000;
    std::vector<int64_t> evenFib(N, 0);
    evenFib[1] = 2;
	int64_t sum(2);

    for(long p = 2; p < N; p++){
        evenFib[p] = 4 * evenFib[p - 1] + evenFib[p - 2];
        if(evenFib[p] >= upperBound){break;}
        sum += evenFib[p];
    }
	
	return sum;
}
		

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int64_t n; scanf("%lld", &n);
        printf("%lld\n", evenSumFib(n));

    }
	
	return 0;
}
