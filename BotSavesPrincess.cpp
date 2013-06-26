#include <iostream>
#include <vector>
using namespace std;


/* Head ends here */
void displayPathtoPrincess(int n, vector <string> grid){
    int  mX = 0, mY = 0, pX = 0, pY = 0;
    string currentString = "";
    for(int y = 0; y < n; y++){
        currentString = grid[y];
        for(int x = 0; x < n; x++){
            if(currentString[x] == 'm'){mX = x; mY = y;}
            else if(currentString[x] == 'p'){pX = x; pY = y;}
            else {continue;}
        }
    }

    string xDirection = "RIGHT\n"; int xDiff = pX - mX;
    if(xDiff < 0){xDirection = "LEFT\n"; xDiff = - xDiff;}
    while(--xDiff >= 0){cout << xDirection;}

    string yDirection = "DOWN\n"; int yDiff = pY - mY;
    if(yDiff < 0){yDirection = "UP\n"; yDiff = - yDiff;}
    while(--yDiff >= 0){cout << yDirection;}

}



/* Tail starts here */
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
