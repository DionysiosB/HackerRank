#include <cstdio>
#include <vector>

int main(){

    int q; scanf("%d", &q);
    while(q--){
        int n; scanf("%d", &n);
        std::vector<std::vector<long> > m(2 * n, std::vector<long>(2 * n, 0));
        for(int row = 0; row < 2 * n; row++){
            for(int col = 0; col < 2 * n; col++){
                scanf("%ld", &m[row][col]);
            }
        }

        long total = 0;
        for(int row = 0; row < n; row++){
            for(int col = 0; col < n; col++){
                long f = m[row][col];
                f = (f > m[2 * n - 1 - row][col]) ? f : m[2 * n - 1 - row][col];
                f = (f > m[row][2 * n - 1 - col]) ? f : m[row][2 * n - 1 - col];
                f = (f > m[2 * n - 1 - row][2 * n - 1 - col]) ? f : m[2 * n - 1 - row][2 * n - 1 - col];
                total += f;
            }
        }

        printf("%ld\n", total);
    }

    return 0;
}
