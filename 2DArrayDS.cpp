#include <cstdio>
#include <vector>

int main(){

    const int N = 6;
    std::vector<std::vector<int> > a(N, std::vector<int>(N, 0));
    for(int row = 0; row < N; row++){for(int col = 0; col < N; col++){scanf("%d", &a[row][col]);}}

    const int M = 4;
    int maxSum(-1000);
    for(int row = 0; row < M; row++){
        for(int col = 0; col < M; col++){
            int candidate = a[row][col] + a[row][col + 1] + a[row][col + 2] + a[row + 1][col + 1] + a[row + 2][col] + a[row + 2][col + 1] + a[row + 2][col + 2];
            maxSum = (maxSum > candidate) ? maxSum : candidate;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
