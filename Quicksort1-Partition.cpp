#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> left, right, equal;
    for(long p = 0; p < n; p++){
        if(a[p] < a[0]){left.push_back(a[p]);}
        else if(a[p] > a[0]){right.push_back(a[p]);}
        else{equal.push_back(a[p]);}
    }

    for(long p = 0; p < left.size(); p++){printf("%ld ", left[p]);}
    for(long p = 0; p < equal.size(); p++){printf("%ld ", equal[p]);}
    for(long p = 0; p < right.size(); p++){printf("%ld ", right[p]);}
    puts("");

    return 0;
}
