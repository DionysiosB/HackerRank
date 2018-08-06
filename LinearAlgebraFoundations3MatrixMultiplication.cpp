#include <cstdio>
#include <vector>

int main(){

    std::vector<std::vector<int> > A = {{1, 2}, {2, 3}};
    std::vector<std::vector<int> > B = {{4, 5}, {7, 8}};
    std::vector<std::vector<int> > C(A.size(), std::vector<int>(B[0].size(), 0));

    for(int row = 0; row < C.size(); row++){
        for(int col = 0; col < C[0].size(); col++){
            for(int p = 0; p < B.size(); p++){C[row][col] += A[row][p] * B[p][col];}
        }
    }

    for(int row = 0; row < C.size(); row++){for(int col = 0; col < C[0].size(); col++){printf("%d\n", C[row][col]);}}

    return 0;
}
