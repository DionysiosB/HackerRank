#include <cstdio>
#include <iostream>
#include <vector>


bool isPalindrome(int64_t x){
    std::vector<int> digits;
    while(x > 0){digits.push_back(x % 10); x /= 10;}
    int len = digits.size();
    for(int64_t p = 0; p < len / 2; p++){if(digits[p] != digits[len - 1 - p]){return false;}}
    return true;
}


int64_t largestPalindrome(int64_t upperBound){

    int64_t ans(0);
    for(int64_t p = 1000; p >= 100; p--){
        for(int64_t q = 1000; q >= 100; q--){
            if(p * q >= upperBound){continue;}
            if(p * q < ans){continue;}
            if(isPalindrome(p * q)){ans = p * q;}
        }
    }

    return ans;
}


int main(){
	
    int t; scanf("%d", &t);
    while(t--){
        int64_t n; scanf("%lld", &n);
        printf("%lld\n", largestPalindrome(n));
    }
	
	return 0;
}
