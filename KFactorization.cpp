#include <cstdio>
#include <vector>
#include <algorithm>

std::vector<long> check(std::vector<long> a, std::vector<long> b){
    if(a.size() == 0){return b;}
    else if(b.size() == 0){return a;}
    else if(a.size() < b.size()){return a;}
    else if(b.size() < a.size()){return b;}
    else if(a.size() == b.size()){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(long p = 0; p < a.size(); p++){
            if(a[p] < b[p]){return a;}
            else if(b[p] < a[p]){return b;}
        }
    }

    return a;
}


void dfs(long target, long ind, std::vector<long> sofar, const std::vector<long> &s, std::vector<long> &res){

    if(target < 1){return;}
    else if(target == 1){res = check(res, sofar); return;}

    for(long p = ind; p < s.size(); p++){
        if(target % s[p] != 0){continue;}
        std::vector<long> factors = sofar; factors.push_back(s[p]);
        dfs(target / s[p], p, factors, s, res);
    }

    return;
}

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> st(k); for(long p = 0; p < k; p++){scanf("%ld", &st[p]);}
    sort(st.begin(), st.end());
    std::vector<long> v, ans;
    dfs(n, 0, v, st, ans);
    if(ans.size() > 0){
        long cp(1); printf("1 "); 
        for(long p = 0; p < ans.size(); p++){cp *= ans[p]; printf("%ld ", cp);}
        puts("");
    }
    else{puts("-1");}

    return 0;
}
