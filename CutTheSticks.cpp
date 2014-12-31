#include <cstdio>
#include <vector>
#include <algorithm>


int main(){

    int N; scanf("%d\n", &N);
    std::vector<int> lengthVec(N);
    for(int p = 0; p < N; p++){scanf("%d", &lengthVec[p]);}

    sort(lengthVec.begin(), lengthVec.end());

    int index = 0;
    int currentMin = lengthVec[0];
    while(index < N){
        printf("%d\n", N - index);
        while(index < N && lengthVec[index] == currentMin){++index;}
        currentMin = lengthVec[index];
    }

    return 0;
}
