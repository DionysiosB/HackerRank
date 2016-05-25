#include <iostream>

int main(){

    int T; std::cin >> T;
    while(T--){
        long N, M, S; std::cin >> N >> M >> S;
        std::cout << (1 + (M - 1 + S - 1) % N) << std::endl;
    }

    return 0;
}
