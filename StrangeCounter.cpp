#include <cstdio>

int main(){

    const int a = 3;
    long long t; scanf("%lld\n", &t);
    long long s(a);
    while(true){
        if(s < t){t -= s; s *= 2;}
        else{printf("%lld\n", s - t + 1); break;}
    }

    return 0;
}
