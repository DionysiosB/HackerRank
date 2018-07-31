#include <iostream>
#include <stack>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::stack<std::pair<long, long> > s;
    while(n--){
        int t; std::cin >> t;
        if(t == 1){
            long u; std::cin >> u;
            long max = (s.empty() || u > s.top().second) ? u : s.top().second;
            s.push(std::make_pair(u, max));
        }
        else if(t == 2){s.pop();}
        else if(t == 3){std::cout << s.top().second << std::endl;}
    }

    return 0;
}
