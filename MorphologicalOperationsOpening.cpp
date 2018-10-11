#include <iostream>
#include <vector>

int main() {
    
    std::vector<std::string> m;
    m.push_back("0000000000");
    m.push_back("0111111100");
    m.push_back("0000111100"); 
    m.push_back("0000111100");
    m.push_back("0001111100");
    m.push_back("0000111100");
    m.push_back("0001100000");
    m.push_back("0000000000");
    m.push_back("0000000000");
    
    
    std::vector<std::vector<long> > f(9, std::vector<long>(10, 1));
    for(long row = 0; row < m.size(); row++){
        for(long col = 0; col < m[0].size(); col++){
            if(row == 0 || col == 0){f[row][col] = 0; continue;}
            for(long dr = -1; dr <= 1; dr++){
                if(row + dr < 0 || row + dr >= m.size()){continue;}
                for(long dc = -1; dc <= 1; dc++){
                    if(col + dc < 0 || col + dc >= m[0].size()){continue;}
                    if(m[row + dr][col + dc] == '0'){f[row][col] = 0;}
                }
            }
        }
    }
    
    std::vector<std::vector<long> > g = f;
    for(long row = 0; row < m.size(); row++){
        for(long col = 0; col < m[0].size(); col++){
            for(long dr = -1; dr <= 1; dr++){
                if(row + dr < 0 || row + dr >= m.size()){continue;}
                for(long dc = -1; dc <= 1; dc++){
                    if(col + dc < 0 || col + dc >= m[0].size()){continue;}
                    if(f[row + dr][col + dc]){g[row][col] = 1;}
                }
            }
        }
    }
    
    
    long cnt(0);
    for(long row = 0; row < g.size(); row++){for(long col = 0; col < g[0].size(); col++){cnt += g[row][col];}}
    
    printf("%ld\n", cnt);
    
    return 0;
}
