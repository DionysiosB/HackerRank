#include <cstdio>

int main(){

    int T; scanf("%d\n", &T);

    while(T--){
        long n, a, b; scanf("%ld\n%ld\n%ld\n", &n, &a, &b);

        long small  = (a < b) ? a : b;
        long large = (a < b) ? b : a;
        long diff = large - small;

        if(n == 1){puts("0");}
        else if(diff == 0){printf("%ld\n", (n - 1) * small);}
        else{for(int p = 0; p < n; p++){printf("%ld ", (n - 1) * small + p * diff);}; puts("");}

    }

    return 0;
}
