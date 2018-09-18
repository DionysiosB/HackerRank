#include<iostream>
#include<vector>
using namespace std;
void next_move(int posr, int posc, int dimh, int dimw, vector <string> board) {
    
    if(board[posr][posc] == 'd'){puts("CLEAN"); board[posr][posc] = '-'; return;}
    long tr(-1), tc(-1), minDist(dimh * dimw + 1);
    for(long row = 0; row < dimh; row++){
        for(long col = 0; col < dimw; col++){
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
    int dim[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    cin>>dim[0]>>dim[1];
    for(int i=0;i<dim[0];i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], dim[0], dim[1], board);
    return 0;
}
