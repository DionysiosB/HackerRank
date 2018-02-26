#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long n; scanf("%ld\n", &n);

        std::vector<long> a(n + 1, 0);
        for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}

        std::vector<long> left(n + 2, 0);
        for(long p = 1; p <= n; p++){left[p] = left[p - 1] + a[p];}

        std::vector<long> right(n + 2, 0);
        for(long p = n; p >= 1; p--){right[p] = right[p + 1] + a[p];}

        bool possible(false);
        for(long p = 1; p <= n; p++){
            if(left[p] == right[p]){possible = true; break;}
        }

        puts(possible ? "YES" : "NO");
    }

    return 0;
}
