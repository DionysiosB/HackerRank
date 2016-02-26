#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<long> w(n);
    for(long p = 0; p < n; p++){std::cin >> w[p];}
    sort(w.begin(), w.end());

    long count(0);
    long diff = 4;
    long paid(-diff - 1);
    for(long p = 0; p < n; p++){
        if(paid + diff < w[p]){paid = w[p]; ++count;}
    }

    std::cout << count << std::endl;

    return 0;
}
