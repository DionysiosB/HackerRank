#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
        

void nextMove(int posr, int posc, vector <string> board) {
    
    if(board[posr][posc] == 'd'){puts("CLEAN"); return;}
    
    for(long row = 0; row < board.size(); row++){
        for(long col = 0; col < board.size(); col++){
            if(board[row][col] != 'd'){continue;}
            if(col < posc){puts("LEFT");}
            else if(col > posc){puts("RIGHT");}
            else if(row < posr){puts("UP");}
            else if(row > posr){puts("DOWN");}
        }
    }
    
    return;
}


int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;
        cin >> s;
        board.push_back(s);
    }
    nextMove(pos[0], pos[1], board);
    return 0;
}
