#include <cstdio>
#include <vector>

int main(){

    const long D = 207;
    long n, d; scanf("%ld %ld", &n, &d);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> h(D);
    long cnt(0);

    for(long p = 0; p < n; p++){
        if(p >= d){

            long cur(0), dm(0);
            for(long u = 0; u < D; u++){
                cur += h[u];
                if(cur >= (d + 1) / 2){dm += u;}
                if(cur >= 1 + d / 2){dm += u; break;}
            }

            cnt += (a[p] >= dm);
            --h[a[p - d]];
        }

        ++h[a[p]];
    }

    printf("%ld\n", cnt);

    return 0;
}
