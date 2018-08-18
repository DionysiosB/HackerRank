#include <iostream>
#include <map>

int main(){

    long m, n; scanf("%ld %ld", &m, &n);
    std::map<std::string, int> r;
    while(m--){
        std::string x; std::cin >> x; 
        if(r.count(x) > 0){++r[x];}
        else{r[x] = 1;}
    }

    bool possible(true);
    while(n--){
        std::string x; std::cin >> x; 
        if(r.count(x) > 0 && r[x] > 0){--r[x];}
        else{possible = false; break;}
    }

    std::cout << (possible ? "Yes" : "No") << std::endl;

    return 0;
}
