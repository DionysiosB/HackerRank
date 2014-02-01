#include <cstdio>
#include <iostream>

int main(){

    const int N = 26;
    int T(0); scanf("%d\n", &T);
    while(T--){
        std::string input; getline(std::cin, input);
        if(input.length() % 2 == 0){
            long count[N] = {0};
            for(long k = 0; k < input.length() / 2; k++){++count[input[k] - 'a'];}
            for(long k = input.length() / 2; k < input.length(); k++){--count[input[k] - 'a'];}
        
            long total(0);
            for(long k = 0; k < N; k++){
                if(count[k] > 0){total += count[k];}
                else{total -= count[k];}
            }

            printf("%ld\n", total / 2);
        }
        else{puts("-1");}

    }
    return 0;
}
