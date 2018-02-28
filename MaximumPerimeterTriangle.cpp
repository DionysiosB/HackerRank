#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d", &n);
    std::vector<long> v(n);
    for(int p = 0; p < n; p++){scanf("%ld", &v[p]);}
    sort(v.begin(), v.end());
    long a(-1), b(-1), c(-1);
    for(int p = n - 3; p >= 0; p--){
        if(v[p] + v[p + 1] > v[p + 2]){
            a = v[p]; b = v[p + 1]; c = v[p + 2];
            break;
        }
    }

    if(a < 0){puts("-1");}
    else{printf("%ld %ld %ld\n", a, b, c);}

    return 0;
}
