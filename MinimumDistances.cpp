#include <iostream>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::map<long, long> pos;
    long minDist(-1);
    for(long p = 0; p < n; p++){
        long x; std::cin >> x;
        if(pos.count(x) == 0){pos[x] = p;}
        else{
            long dist = p - pos[x];
            if(minDist < 0 || dist < minDist){minDist = dist;}
            pos[x] = p;
        }
    }

    std::cout << minDist << std::endl;

    return 0;
}
