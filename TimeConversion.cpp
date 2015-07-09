include <iostream>

int main() {
    
    std::string t; getline(std::cin, t);
    std::string ans = t.substr(0,8);
    if(t[8] == 'P' && !(t[0] == '1' && t[1] == '2')){++ans[0]; ans[1] += 2;}
    if(t[8] == 'A' && t[0] == '1' && t[1] == '2'){ans[0] = '0'; ans[1] = '0';}
    std::cout << ans << std::endl;
    
    return 0;
}
