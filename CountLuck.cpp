#include <iostream>
#include <vector>

void dfs(std::pair<long, long> node, std::pair<long, long> from, long cnt, long &total, const std::pair<long, long> &target, const std::vector<std::string> &b){

    if(total >= 0){return;}
    if(node == target){total = cnt; return;}

    std::vector<std::pair<long, long> > ns;
    long row(node.first), col(node.second);
    if((row > 0) && (b[row - 1][col] != 'X') && (from.first != row - 1)){ns.push_back(std::make_pair(row - 1, col));}
    if((row + 1 < b.size()) && (b[row + 1][col] != 'X') && (from.first != row + 1)){ns.push_back(std::make_pair(row + 1, col));}
    if((col > 0) && (b[row][col - 1] != 'X') && (from.second != col - 1)){ns.push_back(std::make_pair(row, col - 1));}
    if((col + 1 < b[0].size()) && (b[row][col + 1] != 'X') && (from.second != col + 1)){ns.push_back(std::make_pair(row, col + 1));}

    if(ns.size() > 1){++cnt;}
    for(long p = 0; p < ns.size(); p++){dfs(ns[p], node, cnt, total, target, b);}
    return;
}

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> b(n); for(long p = 0; p < n; p++){std::cin >> b[p];}

        std::pair<long, long> init, target;
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                if(b[row][col] == 'M'){init = std::make_pair(row, col);}
                if(b[row][col] == '*'){target = std::make_pair(row, col);}
            }
        }


        long total(-1);
        dfs(init, init, 0, total, target, b);
        long guess; std::cin >> guess;
        std::cout << ((guess == total) ? "Impressed" : "Oops!") << std::endl;
    }

    return 0;
}
