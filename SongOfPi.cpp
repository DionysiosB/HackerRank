#include <cstdio>
#include <iostream>
#include <vector>

std::vector<int> wordLengths(std::string input){

    std::vector<int> output;
    int current(0);
    for(int p = 0; p < input.size(); p++){
        if(('a' <= input[p] && input[p] <= 'z') || ('A' <= input[p] && input[p] <= 'Z')){++current;}
        else{output.push_back(current); current = 0;}
    }
    if(current > 0){output.push_back(current);}

    return output;
}



int main(){

    std::string PI = "31415926535897932384626433833";
    std::vector<int> piDigits;
    for(int p = 0; p < PI.size(); p++){piDigits.push_back(PI[p] - '0');}

    int T; scanf("%d\n", &T);
    while(T--){
        std::string s; getline(std::cin, s);
        std::vector<int> lengths = wordLengths(s);
        bool ans(1);
        for(int p = 0; p < lengths.size() && p < piDigits.size(); p++){
            if(lengths[p] != piDigits[p]){ans = 0; break;}
        }

        if(ans){puts("It's a pi song.");}
        else{puts("It's not a pi song.");}

    }

    return 0;
}
