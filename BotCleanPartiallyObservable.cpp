#include<cstdio>
#include<iostream>
#include<vector>
#include<random>
using namespace std;

void next_move(int posr, int posc, vector <string> board) {
    
    long h = board.size();
    long w = board[0].size();
    
    if(board[posr][posc] == 'd'){puts("CLEAN"); board[posr][posc] = '-'; return;}
    
    long tr(-1), tc(-1), minDist(h * w + 1);
    for(long dr = -1; dr <= 1; dr++){
        for(long dc = -1; dc <= 1; dc++){
            if(dr == 0 && dc == 0){continue;}
            long row = posr + dr; if(row < 0 || row >= h){continue;}
            long col = posc + dc; if(col < 0 || col >= w){continue;}
            if(board[row][col] != 'd'){continue;}
            
            if(dc > 0){puts("RIGHT");}
            else if(dr > 0){puts("DOWN");}
            else if(dc < 0){puts("LEFT");}
            else if(dr < 0){puts("UP");}
            return;
        }
    }
    
    
    if((posr < h / 2) && (posc <= w / 2)){puts("RIGHT"); return;}
    else if((posr <= h / 2) && (posc > w / 2)){puts("DOWN"); return;}
    else if((posr > h / 2) && (posc >= w / 2)){puts("LEFT"); return;}
    else if((posr >= h / 2) && (posc < w / 2)){puts("UP"); return;}
    else{puts("DOWN"); return;} //Just in case;
    
    return;
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
