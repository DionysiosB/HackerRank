#include <iostream>
#include <set>

long long fact(long n, long M){
    if(n < 0){return -1;}
    else if(n <= 1){return 1;}
    
    long long ans(1);
    for(int p = 2; p <= n; p++){
        ans *= p; 
        ans %= M;
    }

    return ans;
}

int countRight(std::string s, int start){
    char x = s[start];
    int count(0);
    for(size_t p = start + 1; p < s.size(); p++){
        count += (s[p] < x);
    }

    return count;
}

/*
int countRight(std::string s, int start){
    char x = s[start];
    std::set<char> t;
    for(size_t p = start + 1; p < s.size(); p++){
        if(s[p] < x){t.insert(s[p]);}
    }

    return t.size();
}
*/


long long getRank(std::string a, int MOD){

    long long ans(0);
    for(int p = 0; p < a.size(); p++){
        ans += fact(a.size() - 1 - p, MOD) * countRight(a, p);
        ans %= MOD;
    }

    return ans;
}

int main(){

    const long MOD = 1000000007;
    std::string a; std::cin >> a;
    std::cout << getRank(a, MOD) << std::endl;

    return 0;
}
