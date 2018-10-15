#include <cstdio>

int main(){

    const long B = 90;
    long n; scanf("%ld", &n);
    long s(0), cnt(0);
    while(n--){
        long x; scanf("%ld", &x);
        if(x < B){continue;}
        s += x; ++cnt;
    }

    printf("%.2lf\n", (100.0 * s + 0.5) / cnt / 100.0);

    return 0;
}
