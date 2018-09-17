#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;

void next_move(int posr, int posc, std::vector <string> &board) {
    
    if(board[posr][posc] == 'd'){puts("CLEAN"); board[posr][posc] = '-'; return;}
    long tr(-1), tc(-1), minDist(board.size() * board[0].size() + 1);
    for(long row = 0; row < board.size(); row++){
        for(long col = 0; col < board.size(); col++){
            if(board[row][col] != 'd'){continue;}
            long distr = row - posr; 
            long distc = col - posc;
            long dist =  (distr < 0 ? -1 : 1) * distr + (distc < 0 ? -1 : 1) * distc;
            if(dist < minDist){tr = row; tc = col; minDist = dist;}
        }
    }
    
    if(tr < 0 || tc < 0){return;}
    if(tc < posc){puts("LEFT");}
    else if(tc > posc){puts("RIGHT");}
    else if(tr < posr){puts("UP");}
    else if(tr > posr){puts("DOWN");}
    else{puts("DONE");}
}



int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
