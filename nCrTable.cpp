#include <cstdio>
#include <vector>

int main(){

    long T(0); scanf("%ld", &T);
    std::vector<long> inputs;
    int maxInput(0);

    for(long k = 0; k < T; k++){
        long temp(0); 
        scanf("%ld", &temp); 
        inputs.push_back(temp);
        if(temp > maxInput){maxInput = temp;}
    }

    std::vector<std::vector<long>> binomial;
    for(long k = 0;k <= maxInput; k++){std::vector<long> zeroVector(maxInput + 1, 0); binomial.push_back(zeroVector);}

    binomial[0][0] = 1;
    for(long row = 1; row <= maxInput; row++){
        binomial[row][0] = 1;
        for(long col = 1; col <= row; col++){binomial[row][col] = (binomial[row - 1][col - 1] + binomial[row - 1][col]) % 1000000000;}
    }

    for(long k = 0;k < T; k++){
        long number(inputs[k]);
        for(long col = 0; col <= number; col++){printf("%ld ", binomial[number][col]);}
        puts("");
    }

    return 0;
}
