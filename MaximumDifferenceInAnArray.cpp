#include <iostream>
#include <vector>

int main(){

    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}

    std::vector<int> rmin(n, INT_MAX);
    rmin[0] = a[0];
    for(int p = 1; p < a.size(); p++){
        rmin[p] = (a[p] < a[p - 1]) ? a[p] : a[p - 1];
    }

    std::vector<int> rmax(n, INT_MIN);
    rmax[a.size() - 1] = a.back();
    for(int p = a.size() - 2; p >= 0; p--){
        rmax[p] = (a[p] > a[p + 1]) ? a[p] : a[p + 1];
    }

    int maxDiff(0);
    for(int p = 0; p < a.size(); p++){
        int cand = rmax[p] - rmin[p];
        maxDiff = (maxDiff > cand) ? maxDiff : cand;
    }

    std::cout << maxDiff << std::endl;

    return 0;
}
