#include <cstdio>
#include <vector>
#include <set>
#include <iterator>

int main(){

    long n, d; scanf("%ld %ld", &n, &d);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::multiset<long> left, right;
    long cnt(0);
    for(long p = 0; p < n; p++){
        if(p >= d){
            long dm(0);
            if(d & 1){dm = 2 * (*right.begin());}
            else{dm = (*left.rbegin()) + (*right.begin());}
            cnt += (a[p] >= dm);
            if(left.count(a[p - d])){left.erase(left.find(a[p - d]));} else{right.erase(right.find(a[p - d]));}
        }

        right.insert(a[p]);
        while(right.size() > left.size() + 1){left.insert(*right.begin()); right.erase(right.begin());}
    }

    printf("%ld\n", cnt);

    return 0;
}
