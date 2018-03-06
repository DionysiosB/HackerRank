#include <iostream>
#include <stack>

int main(){

    std::string s; std::cin >> s;
    std::stack<char> t;
    int last(-1);

    for(int p = 0; p < s.size(); p++){
        if(t.empty() || (t.top() - s[p]) != ('A' - 'a')){t.push(s[p]);}
        else{t.pop(); last = p;}
    }

    std::cout << last << std::endl;

    return 0;
}
