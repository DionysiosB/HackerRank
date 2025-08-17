#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    
    const long N = 3001;
    std::unordered_map<long long , long long> m;
    
    for(long long a = 1; a < N; a++){
        for(long long b = a; b < N; b++){
            long long c = std::sqrt(a * a + b * b);
            if((c + 1) * (c + 1) == a * a + b * b){++c;}
            if(c * c != a * a + b * b){continue;}
            
            long long sum = a + b + c;
            long long product = a * b * c;
            
            if(m.count(sum)){m[sum] = std::max(m[sum], product);}
            else{m[sum] = product;}
        }
    }
    
    int t;
    std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::cout << (m.count(n) ? m[n] : -1) << std::endl;      
    }

    return 0;
}
