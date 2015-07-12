#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::string> depth(n);
    for(int p = 0; p < n; p ++){getline(std::cin, depth[p]);}

    std::vector<int> rows, cols;
    for(int row = 1; row < n - 1; row++){
        for(int col = 1; col < n - 1; col++){
            if(depth[row][col] > depth[row - 1][col] && depth[row][col] > depth[row + 1][col] && depth[row][col] > depth[row][col - 1] && depth[row][col] > depth[row][col + 1]){rows.push_back(row); cols.push_back(col);}
        }
    }

    for(int p = 0; p < rows.size() && p < cols.size(); p++){depth[rows[p]][cols[p]] = 'X';}
    for(int p = 0; p < n; p++){std::cout << depth[p] << std::endl;}

    return 0;
}
