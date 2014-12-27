#include <cstdio>
#include <iostream>

int main(){

    long n; scanf("%ld\n", &n);
    
    while(n--){
        std::string word; getline(std::cin, word);
        long total(0);
        long length = word.size();

        for(long k = 0; k < length / 2; k++){
            int temp = word[k] - word[length - 1 - k];
            if(temp < 0){temp = - temp;}
            total += temp;
        }
        std::cout << total << std::endl;
    }
    
    return 0;
}
