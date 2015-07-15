#include <iostream>
#include <vector>
#include <cmath>

int main(){

    std::string s; getline(std::cin, s);
    int rows = sqrt(s.size());
    int cols = sqrt(s.size());

    if(rows * cols < s.size()){++cols;}

    std::vector<std::string> res(cols, "");
    for(int p = 0; p < s.size(); p++){res[p % cols] += s[p];}
    for(int p = 0; p < res.size(); p++){std::cout << res[p] << " ";}
    std::cout << std::endl;

    return 0;
}
