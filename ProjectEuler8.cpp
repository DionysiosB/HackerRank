#include <iostream>
#include <vector>

int64_t maxProduct(std::string s, int k){

    int n = s.size();
    std::vector<int> digits(n, 0);
    for(int p = 0; p < n; p++){digits[p] = s[p] - '0';}
    int64_t maxProd(0);
    for(int p = k - 1; p < n; p++){
        int64_t prd = 1;
        for(long u = 0; u < k; u++){prd *= digits[p - u];}
        maxProd = (maxProd > prd) ? maxProd : prd;
    }

    return maxProd;
}

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        int n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        std::cout << maxProduct(s, k) << std::endl;
    }

    return 0;
}
