#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> ans(1,1);
    for(int p = 2; p <= n; p++){
        int prev(0);
        for(int q = 0; q < ans.size(); q++){
            ans[q] *= p;
            ans[q] += prev;
            prev = 0;
            if(ans[q] > 10){prev = ans[q] / 10; ans[q] %= 10;}
        }

        while(prev > 0){ans.push_back(prev % 10); prev /= 10;}
    }

    for(int d = ans.size() - 1; d >= 0; d--){printf("%d", ans[d]);}; puts("");

    return 0;
}
