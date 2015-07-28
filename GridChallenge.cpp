#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        int n; scanf("%d\n", &n);
        std::vector<std::string> grid(n);
        for(int p = 0; p < n; p++){getline(std::cin, grid[p]);}
        for(int p = 0; p < n; p++){sort(grid[p].begin(), grid[p].end());}
        
        bool possible(1);
        for(int col = 0; col < n; col++){for(int row = 0; row < n - 1; row++){if(grid[row][col] > grid[row + 1][col]){possible = 0; break;}}}
        if(possible){puts("YES");} else{puts("NO");}
    }

    return 0;
}
