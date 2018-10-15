#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n; std::cin >> n;
    std::string winner; long score(0);

    for(long p = 0; p < n; p++){
        std::string x; long a, b; std::cin >> x >> a >> b;
        long d = b - a;
        if(d > score){winner = x; score = d;}
    }

    std::cout << winner << " " << score << std::endl;

    return 0;
}
