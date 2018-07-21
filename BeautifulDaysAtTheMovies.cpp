#include <iostream>
#include <vector>

long getDiff(long x){

    std::vector<int> dig;
    while(x > 0){dig.push_back(x % 10); x /= 10;}
    std::vector<int> rev;
    for(int p = dig.size() - 1; p >= 0; p--){rev.push_back(dig[p]);}

    long diff(0);
    for(int p = 0; p < dig.size(); p++){diff = 10 * diff + (dig[p] - rev[p]);}
    if(diff < 0){diff = -diff;}
    return diff;
}


int main(){

    long a, b, k; std::cin >> a >> b >> k;
    long count(0);
    for(int p = a; p <= b; p++){
        long diff = getDiff(p);
        count += (diff % k == 0);
    }

    std::cout << count << std::endl;

    return 0;
}
