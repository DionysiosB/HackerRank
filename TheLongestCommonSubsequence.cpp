#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

    std::vector<std::vector<long> > f(n, std::vector<long>(m, 0)); f[0][0] = (a[0] == b[0]);
    std::vector<std::vector<long> > g(n, std::vector<long>(m, 0)); g[0][0] = 1;
    for(long p = 1; p < n; p++){f[p][0] = f[p - 1][0] | (a[p] == b[0]); g[p][0] = -1;}
    for(long p = 1; p < m; p++){f[0][p] = f[0][p - 1] | (a[0] == b[p]); g[0][p] = 1;}

    for(long p = 1; p < n; p++){
        for(long q = 1; q < m; q++){
            if(a[p] == b[q]){f[p][q] = 1 + f[p - 1][q - 1]; g[p][q] = 0;}
            else if(f[p][q - 1] >= f[p - 1][q]){f[p][q] = f[p][q - 1]; g[p][q] = 1;}
            else if(f[p - 1][q] >= f[p][q - 1]){f[p][q] = f[p - 1][q]; g[p][q] = -1;}
        }
    }

    //for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){printf("%ld\t", f[row][col]);}; puts("");}; puts("=====");
    //for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){printf("%ld\t", g[row][col]);}; puts("");}; puts("=====");

    std::vector<long> res;
    long row(n - 1), col(m - 1);
    while(row >= 0 && col >= 0){
        if(a[row] == b[col]){res.push_back(a[row]); --row; --col;}
        else if(g[row][col] > 0){--col;}
        else if(g[row][col] < 0){--row;}
    }

    for(long p = res.size() - 1; p >= 0; p--){printf("%ld ", res[p]);}
    puts("");

    return 0;
}
