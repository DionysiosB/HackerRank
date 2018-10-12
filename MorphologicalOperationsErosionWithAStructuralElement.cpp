#include <iostream>
#include <vector>

int main() {
    
    std::vector<std::string> m;
    m.push_back("00110"); 
    m.push_back("00110");
    m.push_back("00110");
    m.push_back("11111");
    
    std::vector<std::string> f(m.size(), "11111");
    for(long row = 0; row < m.size(); row++){
        for(long col = 0; col < m[0].size(); col++){
            for(long dr = -1; dr <= 1; dr++){
                if(row + dr < 0 || row + dr >= m.size()){f[row][col] = '0'; continue;}
                if(m[row + dr][col] == '0'){f[row][col] = '0';}
            }
        }
    }
    
    for(long row = 0; row < f.size(); row++){std::cout << f[row] << std::endl;}
    
    return 0;
}
