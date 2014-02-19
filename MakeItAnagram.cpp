#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    std::string stringA, stringB;
    getline(std::cin, stringA);
    getline(std::cin, stringB);

    int *arrayA  = new int[stringA.size()];
    int *arrayB = new int[stringB.size()];

    for(int k = 0; k < stringA.size(); k++){arrayA[k] = stringA[k] - 'a';}
    for(int k = 0; k < stringB.size(); k++){arrayB[k] = stringB[k] - 'a';}
    
    std::sort(arrayA, arrayA + stringA.size());
    std::sort(arrayB, arrayB + stringB.size());

    long indexA(0), indexB(0), total(0);
    while(indexA < stringA.size() && indexB < stringB.size()){
        if(arrayA[indexA] == arrayB[indexB]){++indexA; ++indexB;}
        else if(arrayA[indexA] < arrayB[indexB]){++total; ++indexA;}
        else if(arrayA[indexA] > arrayB[indexB]){++total; ++indexB;}
    }

    total += (stringA.size() - indexA) + (stringB.size() - indexB);
    printf("%ld\n", total);

    delete[] arrayA; delete[] arrayB;
    return 0;
}
