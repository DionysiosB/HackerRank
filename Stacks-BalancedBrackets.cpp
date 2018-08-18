#include<iostream>
#include<stack>

bool is_balanced(std::string s) {
    
    std::stack<char> t; 
    for(long p = 0; p < s.size(); p++){
        if(s[p] == '(' || s[p] == '[' || s[p] == '{'){t.push(s[p]);}
        else if(s[p] == ')'){if(!t.empty() && t.top() == '('){t.pop();} else{return false;}}
        else if(s[p] == ']'){if(!t.empty() && t.top() == '['){t.pop();} else{return false;}}
        else if(s[p] == '}'){if(!t.empty() && t.top() == '{'){t.pop();} else{return false;}}
    }
    
    if(t.size() > 0){return false;}
    return true;
}

int main(){
    
    int t; std::cin >> t;
    while(t--){
        std::string expression; std::cin >> expression;
        bool answer = is_balanced(expression);
        if(answer){std::cout << "YES" << std::endl;}
        else{std::cout << "NO" << std::endl;}
    }
    
    return 0;
}
