#include <cstdio>

int main() {

    int t; scanf("%d", &t);
    while(t--){
        int N, M; scanf("%d %d", &N, &M);
        if(N % 2 == 0 || M == 1) puts("2");
        else puts("1");
    }

    return 0;
}
