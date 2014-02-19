#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<bool> convertToBinary(long long input){
    std::vector<bool> output;
    while(input > 0){output.push_back(input % 2); input /= 2;}
    return output;
}


int main(){

    int T(0); scanf("%d", &T);
    while(T--){

        int N(0); scanf("%d\n", &N);
        std::string letters; getline(std::cin, letters); 
        std::sort(letters.begin(), letters.end());
        std::vector<std::string> words;
        for(int k = 1; k < (1 << N); k++){

            std::vector<bool> indices = convertToBinary(k);
            std::string temp("");
            for(int m = 0; m < indices.size(); m++){if(indices[m]){temp += letters[m];}}
            words.push_back(temp);
        }
        std::sort(words.begin(), words.end());
        for(int k = 0; k < words.size(); k++){std::cout << words[k] << std::endl;}
    }

    return 0;
}
