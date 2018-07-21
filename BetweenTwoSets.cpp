#include <iostream>
#include <vector>

int main(){

    int n, m; std::cin >> n >> m;
    std::vector<int> a(n, 0);
    int amax(0);
    for(int p = 0; p < a.size(); p++){
        std::cin >> a[p];
        amax = (amax > a[p]) ? amax : a[p];
    }

    std::vector<int> b(m, 0);
    int bmin(1000);
    for(int p = 0; p < m; p++){
        std::cin >> b[p];
        bmin = (bmin < b[p]) ? bmin : b[p];
    }

    int count(0);
    for(int p = amax; p <= bmin; p++){
        int bet(1);
        for(int q = 0; q < a.size(); q++){if(p % a[q] != 0){bet = 0; break;}}
        for(int q = 0; q < b.size(); q++){if(b[q] % p != 0){bet = 0; break;}}
        count += bet;
    }

    std::cout << count << std::endl;

    return 0;
}
