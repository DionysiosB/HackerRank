#include <iostream>
#include <cmath>
#include <set>

int main(){

    long t; std::cin >> t;
    while(t--){
        int64_t d, p; std::cin >> d >> p;
        int64_t D = d * d + 4 * p;
        int64_t dsqr = sqrt(D);
        if((d < 0) || (D < 0) || (dsqr * dsqr != D) || (dsqr % 2 != d % 2)){std::cout << "0\n"; continue;}
        std::set<std::pair<int64_t, int64_t> > s;

        int64_t a(0);
        a = (-d - dsqr) / 2; s.insert(std::make_pair(a, a + d));
        a = (-d + dsqr) / 2; s.insert(std::make_pair(a, a + d)); 
        a = (d - dsqr) / 2; s.insert(std::make_pair(a, a - d));
        a = (d + dsqr) / 2; s.insert(std::make_pair(a, a - d));

        std::cout << s.size() << std::endl;
    }

    return 0;
}
