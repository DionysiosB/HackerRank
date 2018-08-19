#include <iostream>
#include <vector>
#include <algorithm>

long getDigitSum(long x){
    long total(0);
    while(x > 0){total += (x % 10); x /= 10;}
    return total;
}


int main(){
    
    int n; std::cin >> n;
    std::vector<long> div;
    for(long p = 1; p * p <= n; p++){
        if(n % p != 0){continue;}
        div.push_back(p);
        if(p * p != n){div.push_back(n / p);}
    }
    
    sort(div.begin(), div.end());
    
    long maxSum(1), bestDiv(1);
    for(long p = 0; p < div.size(); p++){
        long sumDigits = getDigitSum(div[p]);
        if(sumDigits > maxSum){bestDiv = div[p]; maxSum = sumDigits;}
    }
    
    std::cout << bestDiv << std::endl;
    
    return 0;
}
