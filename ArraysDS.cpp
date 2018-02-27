#include<cstdio>
#include<vector>

int main(){

    long n; scanf("%ld\n", &n);

    std::vector<long> a(n);
    for(int p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(int p = n - 1; p >= 0; p--){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
