#include <iostream>

int main(){

    long n; std::cin >> n;
    long x(0);
    while(n--){
        std::string s; long num; std::cin >> s >> num;
        if(s == "add" && num > 0){x += num;}
        else if(s == "set" && x < num){x = num;}
    }

    std::cout << x << std::endl;

    return 0;
}
