#include <iostream>
#include <vector>

int main(){

    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    

    std::vector<int> candy(n, 1);
    for(int p = 1; p < n; p++){
        if(a[p] <= a[p - 1]) continue;
        candy[p] = 1 + candy[p - 1];
    }
    for(int p = n - 2; p >= 0; p--){
        if(a[p] <= a[p + 1]) continue;
        if(candy[p] >= candy[p + 1] + 1) continue;
        candy[p] = 1 + candy[p + 1];
    }

    long total(0);
    for(int p = 0; p < n; p++){total += candy[p];}
    std::cout << total << std::endl;

    return 0;
}
