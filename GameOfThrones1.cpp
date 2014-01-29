#include <cstdio>
#include <iostream>

int main() {
    
    std::string input(""); getline(std::cin, input);
    
    const int N = 26;
    long * count = new long[N];
    
    for(int k = 0; k < N; k++){count[k] = 0;}
    for(int k = 0; k < input.size(); k++){++count[input[k] - 'a'];}
    
    bool possible(1);
    int total(0);
    for(int k = 0; k < N; k++){
        if(count[k] % 2){++total;}
        if(total > 1){possible = 0; break;}
    }
    
    if(possible){puts("YES");}
    else{puts("NO");}
    
    return 0;
}
