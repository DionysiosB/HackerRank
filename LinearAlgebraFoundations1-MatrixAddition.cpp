#include <cstdio>
#include <vector>

int main(){

    std::vector<std::vector<int> > a = {{1, 2, 3}, {2, 3, 4}, {1, 1, 1}};
    std::vector<std::vector<int> > B = {{4, 5, 6}, {7, 8, 9}, {4, 5, 7}};

    for(int row = 0; row < A.size(); row++){
        for(int col = 0; col < A[0].size(); col++){
            printf("%d\n", A[row][col] + B[row][col]);
        }
    }

    return 0;
}
