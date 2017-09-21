#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> b(n + 1, 0);
    for(int p = 0; p < n; p++){scanf("%d", &b[p]);}
    long count(0);
    for(int p = 0; p < n; p++){if(b[p] % 2){++b[p]; ++b[p + 1]; count += 2;}}

    if(b[n] % 2){puts("NO");}
    else{printf("%ld\n", count);}

    return 0;
}
