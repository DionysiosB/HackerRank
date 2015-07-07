#include <cstdio>

int main() {
    
    int N; scanf("%d\n", &N);
    long total(0);
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            int num; scanf("%d", &num);
            if(row == col){total += num;}
            if(row + col == N - 1){total -= num;}
        }
    }
    
    if(total < 0){total = - total;}
    printf("%ld\n", total);
    
    return 0;
}
