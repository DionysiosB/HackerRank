#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p].first); a[p].second = p;}

    sort(a.begin(), a.end());
    std::vector<bool> visA(n, 0);
    long candA(0);
    for(long p = 0; p < n; p++){
        if(visA[p]){continue;}
        long x = a[p].second;
        long cnt(0);
        while(!visA[x]){visA[x] = true; x = a[x].second; ++cnt;}  //Count cycle length;
        candA += (cnt - 1);
    }

    sort(a.rbegin(), a.rend());
    std::vector<bool> visB(n, 0);
    long candB(0);
    for(long p = 0; p < n; p++){
        if(visB[p]){continue;}
        long x = a[p].second;
        long cnt(0);
        while(!visB[x]){visB[x] = true; x = a[x].second; ++cnt;}  //Count cycle length;
        candB += (cnt - 1);
    }

    printf("%ld\n", candA < candB ? candA : candB);

    return 0;
}
