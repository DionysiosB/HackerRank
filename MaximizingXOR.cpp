#include <cstdio>
#include <iostream>

const int N = 10;

int findXor(int first, int second){

    int output(0);
    for(int k = 0; k < N; k++){
        if(first % 2 != second % 2){output += (1 << k);}
        first /= 2; second /= 2;
    }
    return output;
}



int main() {

    int left, right; std::cin >> left; std::cin >> right;
    int result(0);

    for(int small = left; small < right; small++){
        for(int large = small + 1; large <= right; large++){
            int test = findXor(small, large);
            if(test > result){result = test;}
        }
    }

    printf("%d\n", result);
    
    return 0;
}
