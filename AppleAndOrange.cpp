#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long s, t; std::cin >> s >> t;
    long a, b; std::cin >> a >> b;
    long m, n; std::cin >> m >> n;

    long apples(0), oranges(0);

    while(m--){
        long d; std::cin >> d;
        if(s <= a + d && (a + d) <= t){++apples;}
    }

    while(n--){
        long d; std::cin >> d;
        if(s <= b + d && (b + d) <= t){++oranges;}
    }

    std::cout << apples << std::endl << oranges << std::endl;

    return 0;
}
