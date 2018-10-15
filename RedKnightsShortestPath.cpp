#include <iostream>
#include <vector>
#include <deque>

int main(){

    long n; std::cin >> n;
    long xs, ys, xt, yt; std::cin >> xs >> ys >> xt >> yt;

    std::deque<std::pair<long, long>> dn; dn.push_back(std::make_pair(xs, ys));
    std::vector<std::vector<long>> m(n, std::vector<long>(n, 100)); m[xs][ys] = 0;
    std::vector<std::vector<std::pair<long, long>>> from(n, std::vector<std::pair<long, long>>(n, std::make_pair(-1, -1))); from[xs][ys] = std::make_pair(0, 0);

    while(!dn.empty()){
        std::pair<long, long> cur = dn.front(); dn.pop_front();
        long row(cur.first), col(cur.second);
        //std::cout << row << " " << col << std::endl;
        if((row - 2 >= 0) && (col - 1 >= 0) && (m[row - 2][col - 1] > 1 + m[row][col])){m[row - 2][col - 1] = 1 + m[row][col]; dn.push_back(std::make_pair(row - 2, col - 1)); from[row - 2][col - 1] = cur;}
        if((row - 2 >= 0) && (col + 1 < n)  && (m[row - 2][col + 1] > 1 + m[row][col])){m[row - 2][col + 1] = 1 + m[row][col]; dn.push_back(std::make_pair(row - 2, col + 1)); from[row - 2][col + 1] = cur;}
        if(                  (col + 2 < n)  && (m[row][col + 2]     > 1 + m[row][col])){m[row][col + 2]     = 1 + m[row][col]; dn.push_back(std::make_pair(row, col + 2));     from[row][col + 2]     = cur;}
        if((row + 2 < n)  && (col + 1 < n)  && (m[row + 2][col + 1] > 1 + m[row][col])){m[row + 2][col + 1] = 1 + m[row][col]; dn.push_back(std::make_pair(row + 2, col + 1)); from[row + 2][col + 1] = cur;}
        if((row + 2 < n)  && (col - 1 >= 0) && (m[row + 2][col - 1] > 1 + m[row][col])){m[row + 2][col - 1] = 1 + m[row][col]; dn.push_back(std::make_pair(row + 2, col - 1)); from[row + 2][col - 1] = cur;}
        if(                  (col - 2 >= 0) && (m[row][col - 2]     > 1 + m[row][col])){m[row][col - 2]     = 1 + m[row][col]; dn.push_back(std::make_pair(row, col - 2));     from[row][col - 2]     = cur;}
    }

    /*
    for(long row = 0; row < n; row++){
        for(long col = 0; col < n; col++){
            std::cout << m[row][col] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
    for(long row = 0; row < n; row++){
        for(long col = 0; col < n; col++){
            std::cout << from[row][col].first << "," << from[row][col].second << "\t";
        }
        std::cout << std::endl;
    }
    */


    std::vector<std::string> sv;
    std::pair<long, long> cur = std::make_pair(xt, yt);
    std::pair<long, long> start = std::make_pair(xs, ys);

    while(cur != start && from[cur.first][cur.second].first >= 0){
        long row(cur.first), col(cur.second);
        std::pair<long, long> nc = from[row][col];
        //std::cout << row << " " << col << "    ---> " << nc.first << " " << nc.second << std::endl;
        long drow(cur.first - nc.first), dcol(cur.second - nc.second);
        cur = nc;
        
        if(drow == 0 && dcol == 2){sv.push_back("R");}
        else if(drow == -2 && dcol == 1){sv.push_back("UR");}
        else if(drow == -2 && dcol == -1){sv.push_back("UL");}
        else if(drow == 0 && dcol == -2){sv.push_back("L");}
        else if(drow == 2 && dcol == -1){sv.push_back("LL");}
        else if(drow == 2 && dcol == 1){sv.push_back("LR");}
    }

    if(from[cur.first][cur.second].first < 0){std::cout << "Impossible" << std::endl;}
    else{
        std::cout << sv.size() << std::endl;
        for(long p = sv.size() - 1; p >= 0; p--){std::cout << sv[p] << " ";}
        puts("");
    }

    return 0;
}
