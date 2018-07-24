#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, k; std::cin >> n >> k;
    std::vector<long> x(n);
    for(int p = 0; p < n; p++){std::cin >> x[p];}
    sort(x.begin(), x.end());

    for(long p = 1; p < n; p++){
        if(x[p] - k <= uncov){continue;}
        ++count; 
        long right = x[p - 1] + k + 1;
        for(int q = p; q < n; q++){if(x[q] > right){uncov = x[q]; break;}}
        std::cout << x[p - 1] << "  uncov: " << uncov << std::endl;
    }

    if(uncov <= x[n - 1]){++count;}

    std::cout << count << std::endl;

    return 0;
}
