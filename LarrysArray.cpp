#include<cstdio>
#include<vector>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        std::vector<int> a(n);
        for(int p = 0; p < n; p++){scanf("%d", &a[p]);}

        long count(0);
        for(int u = 0; u < n; u++){for(int v = u + 1; v < n; v++){count += (a[u] > a[v]);}}
        puts((count % 2) ? "NO" : "YES");
    }

    return 0;
}
