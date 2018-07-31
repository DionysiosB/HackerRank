#include <iostream>
#include <map>
#include <stack>

int main(){

    int n; std::cin >> n;
    std::map<char, char> open; open[')'] = '(';open[']'] = '[';open['}'] = '{';

    while(n--){
        std::string a; std::cin >> a;
        std::stack<char> s;
        bool balanced(true);
        for(long p = 0; p < a.size(); p++){
            if(a[p] == '(' || a[p] == '[' || a[p] == '{'){s.push(a[p]);}
            else if(a[p] == ')' || a[p] == ']' || a[p] == '}'){
                if(s.size() > 0 && s.top() == open[a[p]]){s.pop();}
                else{balanced = false; break;}
            }
        }

        if(s.size() > 0){balanced = false;}
        std::cout << (balanced ? "YES" : "NO") << std::endl;
    }

    return 0;
}
