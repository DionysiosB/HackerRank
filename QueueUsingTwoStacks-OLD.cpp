#include <iostream>
#include <queue>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::queue<long> q;
    while(n--){
        int t; std::cin >> t;
        if(t == 1){long x; std::cin >> x; q.push(x);}
        else if(t == 2){if(q.size() > 0){q.pop();}}
        else if(t == 3){std::cout << q.front() << std::endl;}
    }

    return 0;
}
