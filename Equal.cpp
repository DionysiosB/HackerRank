#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mina(-1);
        std::vector<long> a(n); 
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]); 
            if(mina < 0 || a[p] < mina){mina = a[p];}
        }

        long minCnt(-1);
        for(long x = 0; x < 5; x++){  //Because we can only decrease in steps of 1, 2, 5, the minimum can be below what everyone has;
            long target = mina - x;
            long cnt(0);
            for(long p = 0; p < n; p++){
                if(a[p] <= target){continue;}
                long diff = a[p] - target;
                if(diff >= 5){cnt += diff / 5; diff %= 5;}
                if(diff >= 2){cnt += diff / 2; diff %= 2;}
                if(diff){cnt += diff;}
            }

            if(minCnt < 0 || cnt < minCnt){minCnt = cnt;}
        }

        printf("%ld\n", minCnt);
    }

    return 0;
}
