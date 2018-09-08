#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long R, C; std::cin >> R >> C;
        std::vector<std::string> g(R);
        for(long p = 0; p < R; p++){std::cin >> g[p];}
        long r, c; std::cin >> r >> c;
        std::vector<std::string> a(r);
        for(long p = 0; p < r; p++){std::cin >> a[p];}

        bool possible(false);
        for(long dr = 0; dr + r <= R; dr++){
            if(possible){break;}
            for(long dc = 0; dc + c <= C; dc++){
                bool cur(true);
                for(long row = 0; row < r; row++){
                    if(!cur){break;}
                    for(long col = 0; col < c; col++){
                        if(g[dr + row][dc + col] != a[row][col]){cur = false; break;}
                    }
                }
                if(cur){possible = true; break;}
            }
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

    return 0;
}
