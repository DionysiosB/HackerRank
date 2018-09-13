#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long left, right; scanf("%ld %ld", &left, &right);
    long res(left), dist(0);
    if(a[0] - left > dist){res = left; dist = a[0] - left;}
    if(right - a.back() > dist){res = right; dist = right - a.back();}
    for(long p = 1; p < n; p++){
        if(a[p] < left){continue;}
        if(right < a[p - 1]){break;}
        long tp = (a[p - 1] + a[p]) / 2;
        tp = (tp > left) ? tp : left; tp = (tp < right) ? tp : right;
        long da(tp - a[p - 1]), db(a[p] - tp);
        long test = (da < db) ? da : db;
        if(test > dist){res = tp; dist = test;}
    }

    printf("%ld\n", res);

    return 0;
}
