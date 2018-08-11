#include <cstdio>
#include <iostream>
#include <vector>

std::vector<std::vector<int64_t> > matrixMult(std::vector<std::vector<int64_t> > a , std::vector<std::vector<int64_t> > b){

    int n = a.size();
    int c = a[0].size();
    int m = b[0].size();
    std::vector<std::vector<int64_t> > mult(n, std::vector<int64_t>(m, 0));

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            for(int p = 0; p < c; p++){mult[row][col] += a[row][p] * b[p][col];}
        }
    }

    return mult;
}


int main(){

    std::vector<std::vector<int64_t> > A = {{-2, -9}, {1, 4}};
    int count(1000);
    std::vector<std::vector<int64_t> > accum = A;
    while(--count){accum = matrixMult(accum, A);}
    for(int row = 0; row < accum.size(); row++){for(int col = 0; col < accum[0].size(); col++){printf("%lld\n", accum[row][col]);}}

    return 0;
}
