#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string conf; std::cin >> conf;
    size_t count(1);
    for(size_t p = 1; p < conf.size(); p++){if(conf[p] != conf[p - 1]){++count;}}
    std::cout << count << std::endl;

    return 0;
}
