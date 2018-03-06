#include <iostream>
#include <vector>
#include <climits>

int main(){

    int n; std::cin >> n;
    std::vector<int> arr(n);
    for(int p = 0; p < n; p++){std::cin >> arr[p];}


    int a(INT_MIN), b(INT_MIN), c(INT_MIN); //a > b > c;
    for(int p = 0; p < n; p++){
        if(arr[p] > a){c = b; b = a; a = arr[p];}
        else if(b < arr[p] && arr[p] < a){c = b; b = arr[p];}
        else if(c < arr[p] && arr[p] < b){c = arr[p];}
    }

    std::cout << c << std::endl;

    return 0;
}
