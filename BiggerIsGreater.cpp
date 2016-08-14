#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        int index(s.size() - 1);
        char pivot('\0');
        char maxChar('\0');
        std::vector<char> rightChars;

        while(index >= 0){
            char x = s[index--]; rightChars.push_back(x);
            if(x < maxChar){
                sort(rightChars.begin(), rightChars.end());
                pivot = *std::upper_bound(rightChars.begin(), rightChars.end(), x);
                break;
            }
            else{maxChar = x;}
        }

        if(pivot == 0){std::cout << "no answer" << std::endl;}
        else{
            for(int p = 0; p <= index; p++){std::cout << s[p];}
            std::cout << pivot;
            bool bypassed(false);
            for(int p = 0; p < rightChars.size(); p++){
                if(!bypassed && rightChars[p] == pivot){bypassed = true; continue;}
                std::cout << rightChars[p];}
            std::cout << std::endl;
        }
    }

    return 0;
}
