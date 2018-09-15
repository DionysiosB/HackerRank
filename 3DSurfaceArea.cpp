#include <cstdio>
#include <vector>

int main(){

    long h, w; scanf("%ld %ld", &h, &w);
    std::vector<std::vector<long > > b(h + 2, std::vector<long>(w + 2, 0));
    for(long row = 1; row <= h; row++){for(long col = 1; col <= w; col++){scanf("%ld", &b[row][col]);}}
    long total(2 * w * h);
    for(long row = 1; row <= h; row++){
        for(long col = 1; col <= w; col++){
            if(b[row][col] > b[row - 1][col]){total += b[row][col] - b[row - 1][col];}
            if(b[row][col] > b[row + 1][col]){total += b[row][col] - b[row + 1][col];}
            if(b[row][col] > b[row][col - 1]){total += b[row][col] - b[row][col - 1];}
            if(b[row][col] > b[row][col + 1]){total += b[row][col] - b[row][col + 1];}
        }
    }

    printf("%ld\n", total);

    return 0;
}
