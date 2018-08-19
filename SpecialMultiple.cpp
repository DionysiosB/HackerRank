#include <iostream>
#include <vector>

int64_t convertNum(int64_t x){
    
    std::vector<bool> bin;
    while(x > 0){bin.push_back(x % 2); x /= 2;}
    int64_t zn(0);
    for(long p = bin.size() - 1; p >= 0; p--){zn = 10 * zn + 9 * bin[p];}
    return zn;
}



int main() {
    
    long t; std::cin >> t;
    while(t--){
        int64_t n; std::cin >> n;
        int64_t b(1);
        while(true){
            int64_t m = convertNum(b);
            if(m % n == 0){std::cout << m << std::endl; break;}
            ++b;
        }
    }
    
    return 0;
}
