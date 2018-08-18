#include <iostream>
#include <vector>

int main(){
    
    const int N = 6;
    std::vector<std::vector<int> > a(N, std::vector<int>(N));
    for(int p = 0; p < N; p++){for(int q = 0; q < N; q++){std::cin >> a[p][q];}}
    
    long maxSum(-10000);
    for(int p = 0; p < N - 2; p++){
        for(int q = 0; q < N - 2; q++){
            long sum = a[p][q] + a[p][q + 1] + a[p][q + 2] + a[p + 1][q + 1] + a[p + 2][q] + a[p + 2][q + 1] + a[p + 2][q + 2];
            maxSum = (maxSum > sum) ? maxSum : sum;
        }
    }
    
    std::cout << maxSum << std::endl;
    
    return 0;
}
