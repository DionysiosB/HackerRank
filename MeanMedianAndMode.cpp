#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d", &n);
    std::vector<int64_t> a(n);
    for(int p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());

    double mean(0), sum(0), median(0);
    int64_t mode(0), count(0), maxCount(0);

    if(n % 2){median = a[n / 2];}
    else{median = (a[n / 2 - 1] + a[n / 2]) / 2.0;}

    mean = mode = a[0]; count = 1;
    for(int p = 1; p < n; p++){
        mean += a[p];

        if(a[p - 1] == a[p]){
            ++count; 
            if(count > maxCount){maxCount = count; mode = a[p];}
        }
        else{count = 1;}
    }

    mean /= 1.0 * n;
    printf("%.1lf\n%.1lf\n%lld\n", mean, median, mode);

    return 0;
}
