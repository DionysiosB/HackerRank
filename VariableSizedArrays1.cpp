#include <iostream>
#include <vector>

int main(){
    long n, q; std::cin >> n >> q;
    std::vector<std::vector<long> > data(n);
    for(long p = 0; p < n; p++){
        long h; std::cin >> h;
        while(h--){long x; std::cin >> x; data[p].push_back(x);}
    }

    for(long p = 0; p < q; p++){
        long a, b; std::cin >> a >> b;
        std::cout << data[a][b] << std::endl;
    }

    return 0;
}
