#include <cstdio>
#include <vector>

int main(){

    long n1, n2, n3; scanf("%ld %ld %ld\n", &n1, &n2, &n3);
    std::vector<long> v1(n1, 0);
    std::vector<long> v2(n2, 0);
    std::vector<long> v3(n3, 0);

    for(long p = 0; p < n1; p++){scanf("%ld", &v1[p]);}
    for(long p = 0; p < n2; p++){scanf("%ld", &v2[p]);}
    for(long p = 0; p < n3; p++){scanf("%ld", &v3[p]);}

    long p1(n1), p2(n2), p3(n3);
    long long h1(0), h2(0), h3(0), h(0);

    while(p1 > 0 || p2 > 0 || p3 > 0){
        bool flag(0);
        if(h1 < h2 && p1 > 0){h1 += v1[--p1]; flag = 1;}
        else if(h2 < h1 && p2 > 0){h2 += v2[--p2]; flag = 1;}
        else if(h1 == h2 && h1 < h3){
            if(p1 > 0){h1 += v1[--p1]; flag = 1;}
            if(p2 > 0){h2 += v2[--p2]; flag = 1;}
        }
        else if(h1 > h3 && p3 > 0){h3 += v3[--p3]; flag = 1;}
        else{
            h = h1;
            if(p1 > 0){h1 += v1[--p1]; flag = 1;}
            if(p2 > 0){h2 += v2[--p2]; flag = 1;}
            if(p3 > 0){h3 += v3[--p3]; flag = 1;}
        }
        if(!flag){break;}
    }

    if(h1 == h2 && h2 == h3){h = h1;}
    printf("%lld\n", h);

    return 0;
}
