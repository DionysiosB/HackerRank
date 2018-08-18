#include <iostream>
#include <vector>

void dfs(int row, int col, std::vector<std::vector<int> > &g, int &count){
    
    if(row < 0 || row >= g.size() || col < 0 || col >= g[0].size()){return;}
    if(g[row][col] <= 0){return;}
    g[row][col] = -1; ++count;
    
    for(int dr = -1; dr <= 1; dr++){
        for(int dc = -1; dc <= 1; dc++){
            dfs(row + dr, col + dc, g, count);
        }
    }
    
    return;
}


int get_biggest_region(std::vector<std::vector<int> > grid) {
    
    std::vector<std::vector<int> > a = grid;
    int largest(0);
    for(long p = 0; p < grid.size(); p++){
        for(long q = 0; q < grid[0].size(); q++){
            if(grid[p][q] <= 0){continue;}
            int count(0);
            dfs(p, q, a, count);
            largest = (largest > count) ? largest : count;
        }
    }
    
    return largest;
}

int main(){
    int n;
    std::cin >> n;
    int m;
    std::cin >> m;
    std::vector< std::vector<int> > grid(n,std::vector<int>(m));
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          std::cin >> grid[grid_i][grid_j];
       }
    }
    std::cout << get_biggest_region(grid) << std::endl;
    return 0;
}
