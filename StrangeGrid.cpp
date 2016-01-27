#include <iostream>

int main(){

    long row, col; std::cin >> row >> col;
    --row; --col;
    long ans = 10 * (row / 2) + (row % 2) + 2 * col;
    std::cout << ans << std::endl;

    return 0;
}
