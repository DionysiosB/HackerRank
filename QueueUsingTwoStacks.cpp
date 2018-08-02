#include <iostream>
#include <stack>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::stack<long> u;
    std::stack<long> v;

    while(n--){
        int t; std::cin >> t;
        if(t == 1){long x; std::cin >> x; u.push(x);}
        else if(t == 2){
            if(v.empty()){while(!u.empty()){v.push(u.top()); u.pop();}}
            if(!v.empty()){v.pop();}
        }
        else if(t == 3){
            if(v.empty()){while(!u.empty()){v.push(u.top()); u.pop();}}
            if(!v.empty()){std::cout << v.top() << std::endl;}
        }
    }

    return 0;
}
