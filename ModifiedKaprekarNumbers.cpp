#include <cstdio>
#include <vector>

bool checkKaprekar(long long n){

    long long s = n * n;
    std::vector<int> digits;
    while(s > 0){digits.push_back(s % 10); s /= 10;}

    int ds = digits.size();

    long long left(0);
    for(int p = ds - 1; p >= ds - ds/2; p--){left = 10 * left + digits[p];}
    long long right(0);
    for(int p = ds  - ds/2 - 1; p >= 0; p--){right = 10 * right + digits[p];}
    if(left + right == n){return true;}
    return false;
}

int main(){

    long long p, q; scanf("%lld\n%lld\n", &p, &q);
    std::vector<long long> output;
    for(long long t = p; t <= q; t++){if(checkKaprekar(t)){output.push_back(t);}}
    if(output.size() <= 0){puts("INVALID RANGE");}
    else{for(int u = 0; u < output.size(); u++){printf("%lld ", output[u]);}; puts("");}

    return 0;
}
