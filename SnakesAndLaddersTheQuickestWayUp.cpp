#include <cstdio>
#include <vector>
#include <queue>

int main(){

    const long N = 100;
    long t; scanf("%ld", &t);
    while(t--){
        std::vector<long> sh(N + 1, 0); for(long p = 1; p <= N; p++){sh[p] = p;}
        long n; scanf("%ld", &n); for(long p = 0; p < n; p++){long from, to; scanf("%ld %ld", &from, &to); sh[from] = to;}
        long m; scanf("%ld", &m); for(long p = 0; p < m; p++){long from, to; scanf("%ld %ld", &from, &to); sh[from] = to;}

        std::vector<long> f(N + 1, N + 1); f[1] = 0;
        std::queue<long> q; q.push(1);
        while(!q.empty()){
            long x = q.front(); q.pop();
            for(long d = 1; d <= 6; d++){
                if(x + d > N){continue;}
                long y = sh[x + d];
                if(f[x] + 1 < f[y]){f[y] = f[x] + 1; q.push(y);}
            }
        }

        printf("%ld\n", f[N] < N ? f[N] : -1);
    }

    return 0;
}
