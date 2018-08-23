#include <cstdio>
#include <vector>


int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> which(n + 1), where(n + 1);
    for(long p = 1; p <= n; p++){
        long x; scanf("%ld", &x);
        which[p] = x;
        where[x] = p;
    }


    for(long p = 1; p <= n; p++){
        long rightNum = n - p + 1;
        long rightPos = where[rightNum];
        long leftNum = which[p];
        long leftPos = p;
        if(rightNum <= leftNum){continue;}

        long temp = where[rightNum]; where[rightNum] = where[leftNum]; where[leftNum] = temp;
        temp = which[leftPos]; which[leftPos] = which[rightPos]; which[rightPos] = temp;

        --k; if(k <= 0){break;}
    }

    for(long p = 1; p <= n; p++){printf("%ld ", which[p]);}; puts("");

    return 0;
}
