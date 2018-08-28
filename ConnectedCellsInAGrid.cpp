#include <cstdio>
#include <vector>

void dfs(long row, long col, const std::vector<std::vector<long> > &mt, std::vector<std::vector<bool> > &vis, long &count){

    if(row < 0 || row >= mt.size() || col < 0 || col >= mt[0].size()){return;}
    if(!mt[row][col]){return;}
    if(vis[row][col]){return;}

    vis[row][col] = true; ++count;
    dfs(row - 1, col - 1, mt, vis, count);
    dfs(row - 1, col, mt, vis, count);
    dfs(row - 1, col + 1, mt, vis, count);

    dfs(row, col - 1, mt, vis, count);
    dfs(row, col + 1, mt, vis, count);

    dfs(row + 1, col - 1, mt, vis, count);
    dfs(row + 1, col, mt, vis, count);
    dfs(row + 1, col + 1, mt, vis, count);

    return;
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > mt(n, std::vector<long>(m, 0));
    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){scanf("%ld", &mt[row][col]);}}

    std::vector<std::vector<bool> > visited(n, std::vector<bool>(m, 0));
    long res(0);
    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            if(!mt[row][col] || visited[row][col]){continue;}
            long cnt(0);
            dfs(row, col, mt, visited, cnt);
            res = (res > cnt) ? res : cnt;
        }
    }

    printf("%ld\n", res);

    return 0;
}
