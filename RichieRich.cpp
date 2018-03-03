#include <iostream>
#include <vector>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    std::vector<bool> v(n, 0);
    for(int p = 0; p < s.size() / 2; p++){
        if(s[p] != s[n - 1 - p]){
            char x = s[p] > s[n - 1 - p] ? s[p] : s[n - 1 - p];
            s[p] = s[n - 1 - p] = x;
            v[p] = v[n - 1 - p] = 1;
            --k;
            if(k < 0){break;}
        }
    }

    if(k < 0){std::cout << "-1" << std::endl; return 0;}

    for(int p = 0; p <= s.size() / 2; p++){
        if(k <= 0){break;}
        if(s[p] != '9'){
            if(((p == n - 1 - p) || v[p] || v[n - 1 - p]) && (k >= 1)){--k; s[p] = s[n - 1 - p] = '9';}
            else if(k >= 2){s[p] = s[n - 1 - p] = '9'; k -= 2;}
        }
    }

    std::cout << s << std::endl;

    return 0;
}
