#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int row, int col, vector <string> grid){

    int  pX = 0, pY = 0;
    string currentString = "";
	bool pFlag = 0;
    for(int y = 0; y < n; y++){
		if(pFlag){break;}
        currentString = grid[y];
        for(int x = 0; x < n; x++){if(currentString[x] == 'p'){pFlag = 1; pX = x; pY = y; break;}}
    }
	
	if(pX != col){(pX < col) ? printf("LEFT\n") : printf("RIGHT\n");}
	else if(pY != row){(pY < row) ? printf("UP\n") : printf("DOWN\n");}
}

int main(void) {

    int n, row, col;
    vector <string> grid;

    cin >> n; cin >> row; cin >> col;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, row, col, grid);
    return 0;
}
