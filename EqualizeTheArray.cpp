#include <iostream>
#include <map>

int main(){

    int n; std::cin >> n;
    std::map<int, int> counts;
    int max(0);
    for(int p = 0; p < n; p++){
        int x; std::cin >> x;
        if(counts.count(x) <= 0){counts[x] = 0;}
        ++counts[x];
        if(counts[x] > max){max = counts[x];}
    }

    std::cout << (n - max) << std::endl;

    return 0;
}
