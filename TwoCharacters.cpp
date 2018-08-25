#include <iostream>
#include <vector>

long getLength(const std::vector<long> &f, const std::vector<long> &g){

    if(f.size() < g.size() || f.size() > g.size() + 1){return 0;}
    long n = f.size() + g.size();

    long x(-1);
    for(long p = 0; p < n; p++){
        if(p & 1){if(x < g[p / 2]){x = g[p / 2];} else{return 0;}}
        else{if(x < f[p / 2]){x = f[p / 2];} else{return 0;}}
    }

    return n;
}


int main(){

    const long N = 26;
    
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<std::vector<long> > v(N);
    for(long p = 0; p < n; p++){v[s[p] - 'a'].push_back(p);}

    long maxLength(0);
    for(long p = 0; p < N; p++){
        if(v[p].size() == 0){continue;}
        for(long q = 0; q < N; q++){
            if(p == q || v[q].size() == 0){continue;}
            long cand = getLength(v[p], v[q]);
            maxLength = (maxLength > cand) ? maxLength : cand;
        }
    }

    std::cout << maxLength << std::endl;

    return 0;
}
