#include<iostream>
#include<vector>

int main(){

    const int N = 26;
    std::vector<long> h(N, 0);
    for(int p = 0; p < N; p++){std::cin >> h[p];}
    std::string s; std::cin >> s;
    long height(0);
    for(int p = 0; p < s.size(); p++){
        int cur = h[s[p] - 'a'];
        height = (height > cur) ? height : cur;
    }

    long area = height * s.size();
    std::cout << area << std::endl;

    return 0;
}
