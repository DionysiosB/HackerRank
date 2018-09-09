#include <iostream>
#include <vector>

const long B = 4;

bool check(const std::vector<std::vector<long> > &f, const long &n, long left, long right){

    long div = n / B;
    std::vector<long> outside(B, 0); 
    for(long p = 0; p < B; p++){outside[p] = f[n - 1][p] - (f[right][p] - ((left > 0) ? f[left - 1][p] : 0));}
    for(long p = 0; p < B; p++){if(outside[p] > div){return false;}}
    return true;
}

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<std::vector<long> > f(n, std::vector<long>(B, 0));

    for(long p = 0; p < s.size(); p++){
        for(long u = 0; u < B; u++){f[p][u] = (p > 0) ? f[p - 1][u] : 0;}
        if(s[p] == 'A'){++f[p][0];}
        if(s[p] == 'C'){++f[p][1];}
        if(s[p] == 'G'){++f[p][2];}
        if(s[p] == 'T'){++f[p][3];}
    }

    bool needEdit(false);
    for(long p = 0; p < B; p++){if(B * f[n - 1][p] != n){needEdit = true;}}

    if(needEdit){
        long left(0), right(0), mn(n + 1);
        while((left <= right) && (right < n)){
            if(check(f, n, left, right)){mn = (mn < right - left + 1) ? mn : (right - left + 1); ++left;}
            else{++right;}
        }

        printf("%ld\n", mn);
    }
    else{puts("0");}

    return 0;
}
