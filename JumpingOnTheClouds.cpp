#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> c(n, 0);
    for(int p = 0; p < n; p++){scanf("%d", &c[p]);}

    const int COUNT_MAX = 100;
    std::vector<int> count(n, COUNT_MAX);
    count[0] = 0; count[1] = 1;
    for(int p = 2; p < n; p++){
        if(c[p] == 1){continue;}
        if(!c[p - 2]){count[p] = 1 + count[p - 2];}
        if(!c[p - 1] && count[p - 1] + 1 < count[p]){count[p] = 1 + count[p - 1];}
    }

    printf("%d\n", count.back());

    return 0;
}
