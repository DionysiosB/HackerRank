#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, k; std::cin >> n >> k;
    std::multiset<long> s;
    for(long p = 0; p < n; p++){long x; std::cin >> x; s.insert(x);}
    long count(0);
    while(s.size() > 1){
        std::cout << std::endl << "======   ";
        int u(0);
        for(std::multiset<long>::iterator setIter = s.begin(); setIter != s.end(); setIter++){
            std::cout << (*setIter) << " ";
            ++u; if(u > 10) break;
        }; std::cout << std::endl;

        long x = *s.begin();
        if(x >= k){break;}
        s.erase(s.begin());
        long y = *s.begin();
        s.erase(s.begin()); 
        s.insert(x + 2 * y);
        std::cout << "Removed:" << x << "  Removed:" << y << "  Inserted:" << (x + 2 * y) << "  Size:" << s.size() << "  Count:" << count << std::endl;
        ++count;
    }

    std::cout << (((s.size() > 0) && (*s.begin() >= k)) ? count : -1) << std::endl;

    return 0;
}
