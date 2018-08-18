#include <iostream>
#include <cmath>

int main(){
    
    double cost, tip, tax; std::cin >> cost >> tip >> tax;
    long total = round(cost * (1 + tip/100 + tax/100));
    std::cout << "The total meal cost is " << total << " dollars." << std::endl;
    
    return 0;
}
