#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    long n; scanf("%ld\n", &n);
    std::vector<std::pair<long, long> > orders(n);
    for(int p = 0; p < n; p++){
        long t, d; scanf("%ld %ld\n", &t, &d);
        orders[p] = std::pair<long, long>(t + d, p);
    }

    sort(orders.begin(), orders.end());

    for(int p = 0; p < orders.size(); p++){std::cout << 1 + orders[p].second << " ";}
    std::cout << std::endl;

    return 0;
}
