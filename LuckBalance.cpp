#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n, k; scanf("%d %d\n", &n, &k);
    long luck(0);
    std::vector<int> cont;
    for(int p = 0; p < n; p++){
        int l, t; scanf("%d %d\n", &l, &t);
        if(t == 0){luck += l;}
        else{cont.push_back(l);}
    }

    sort(cont.begin(), cont.end());
    std::reverse(cont.begin(), cont.end());
    for(int p = 0; p < cont.size(); p++){luck += cont[p] * ((p < k) ? 1 : -1);}
    printf("%ld\n", luck);

    return 0;
}
