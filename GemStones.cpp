#include <cstdio>
#include <iostream>

int main(){

    int n; scanf("%d\n", &n);

    const int A = 26; long counts[A] = {0};

    for(int k = 0; k < n; k++){
        std::string rock; getline(std::cin, rock);
        long currentCounts[A] = {0};
        for(size_t p = 0; p < rock.size(); p++){currentCounts[rock[p] - 'a'] = 1;}
        for(size_t p = 0; p < A; p++){counts[p] += currentCounts[p];}
    }

    long total(0);
    for(int p = 0; p < A; p++){if(counts[p] >= n){++total;}}
    printf("%ld\n", total);

    return 0;
}
