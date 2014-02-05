#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    const int UPPER = 100;
    long n(0); scanf("%ld", &n);
    std::vector<int> input(n,0);
    int temp(0); std::string dummy("");
    for(int k = 0; k < n; k++){std::cin >> input[k] >> dummy;}

    std::sort(input.begin(), input.end());

    int soFar(0); 
    for(int k = 0; k < UPPER; k++){
        while(soFar < input.size() && k >= input[soFar]){++soFar;}
        printf("%d ", soFar);
    }
    puts("");

    return 0;
}
