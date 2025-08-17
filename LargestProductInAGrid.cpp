#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
    	for(int grid_j = 0;grid_j < 20;grid_j++){
    		cin >> grid[grid_i][grid_j];
    	}
    }
    
    long long maxprod(0);
    
    for(long row = 0; row < grid.size(); row++){
        for(long col = 0; col < grid[0].size(); col++){
            long long prod(0);
            if(row + 3 < grid.size()){
                prod = grid[row][col] * grid[row + 1][col] * grid[row + 2][col] * grid[row + 3][col];
                maxprod = (maxprod > prod ? maxprod : prod);
            }
            if(col + 3 < grid[0].size()){
                prod = grid[row][col] * grid[row][col + 1] * grid[row][col + 2] * grid[row][col + 3];
                maxprod = (maxprod > prod ? maxprod : prod);
            }
            if(row + 3 < grid.size() && col + 3 < grid[0].size()){
                prod = grid[row][col] * grid[row + 1][col + 1] * grid[row + 2][col + 2] * grid[row + 3][col + 3];
                maxprod = (maxprod > prod ? maxprod : prod);
            }
            if(row >= 3 && col + 3 < grid[0].size()){
                prod = grid[row][col] * grid[row - 1][col + 1] * grid[row - 2][col + 2] * grid[row - 3][col + 3];
                maxprod = (maxprod > prod ? maxprod : prod);
            }
        }
    }
    
    std::cout << maxprod << std::endl;    
    
    return 0;
}

