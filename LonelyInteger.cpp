#include <cstdio>
#include <set>

int main(){

    std::set<int> numbers;
    
    int N(0); scanf("%d", &N);
    int currentNumber(0);
    while(N--){
        scanf("%d", &currentNumber);
        if(numbers.find(currentNumber) == numbers.end()){numbers.insert(currentNumber);}
        else{numbers.erase(currentNumber);}
    }
    printf("%d\n", *numbers.begin());
    return 0;
}
