#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
void insertionSort(vector <int>  input) {
    
    int index(input.size() - 1);
    int toInsert = input[index];
    bool done(0);
    
    while(!done){
    
        if(index > 0 && input[index - 1] > toInsert){input[index] = input[index - 1]; --index;}
        else{input[index] = toInsert; done = 1;}
        
        for(int k = 0; k < input.size(); k++){printf("%d ", input[k]);}
        puts("");
    }

}
/* Tail starts here */
int main(void) {
   vector <int>  inputVector;
   int inputSize; std::cin >> inputSize;
for(int k = 0; k < inputSize; k++) {
   int temp; cin >> temp;
   inputVector.push_back(temp); 
}

insertionSort(inputVector);
   
   return 0;
}
