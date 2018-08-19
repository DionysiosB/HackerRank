#include <iostream>
#include <vector>

std::vector<long> primeFactors(int64_t n){
    std::vector<long> f;
    while (n % 2 == 0){f.push_back(2); n = n/2;}
    for (int p = 3; p * p <= n; p += 2){while (n % p == 0){f.push_back(p); n /= p;}}
    if (n > 2){f.push_back(n);}
    return f;
}

long digitSum(int64_t n){
    long s(0);
    while(n > 0){s += (n % 10); n /= 10;}
    return s;
}


int main() {
    
    int64_t n; std::cin >> n;
    std::vector<long> factors = primeFactors(n);
    long fs(0); for(long p = 0; p < factors.size(); p++){fs += digitSum(factors[p]);}
    long ds = digitSum(n);
    std::cout << (fs == ds ? 1 : 0) << std::endl;
    
    return 0;
}
