#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

bool isPrime(long input){
    for(int p = 2; p <= sqrt(input); p++){if(input % p == 0){return false;}}
    return true;
}


int main(){

    int T; scanf("%d\n", &T);

    while(T--){

        int N; scanf("%d\n", &N);
        std::string result = "YES";

        for(int p = 0; p < N; p++){
            long temp; scanf("%ld", &temp);
            if(!isPrime(temp)){result = "NO";}
        }

        std::cout << result << std::endl;

    }



    return 0;
}
