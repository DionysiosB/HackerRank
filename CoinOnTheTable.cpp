#include <iostream>
#include <vector>
#include <queue>

long mmin(long x, long y){return (x < y) ? x : y;}

int main(){

    const long MAX = 1e9;

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<std::string> b(n);
    for(long p = 0; p < n; p++){std::cin >> b[p];}
    std::vector<std::vector<std::vector<long > > > f(n, std::vector<std::vector<long> >(m, std::vector<long>(k + 1, MAX)));
    f[0][0][0] = 0;
    std::queue<std::pair<long, long> > q; q.push(std::make_pair(0, 0));
    while(!q.empty()){
        std::pair<long, long> pos = q.front(); q.pop();
        long rr(pos.first), cc(pos.second);
        char dir = b[rr][cc]; if(dir == '*'){continue;}
        for(long t = 0; t < k; t++){
            if((rr > 0) && (f[rr - 1][cc][t + 1] > f[rr][cc][t] + (dir != 'U'))){f[rr - 1][cc][t + 1] = f[rr][cc][t] + (dir != 'U'); q.push(std::make_pair(rr - 1, cc));}
            if((rr < n - 1) && (f[rr + 1][cc][t + 1] > f[rr][cc][t] + (dir != 'D'))){f[rr + 1][cc][t + 1] = f[rr][cc][t] + (dir != 'D'); q.push(std::make_pair(rr + 1, cc));}
            if((cc > 0) && (f[rr][cc - 1][t + 1] > f[rr][cc][t] + (dir != 'L'))){f[rr][cc - 1][t + 1] = f[rr][cc][t] + (dir != 'L'); q.push(std::make_pair(rr, cc - 1));}
            if((cc < m - 1) && (f[rr][cc + 1][t + 1] > f[rr][cc][t] + (dir != 'R'))){f[rr][cc + 1][t + 1] = f[rr][cc][t] + (dir != 'R'); q.push(std::make_pair(rr, cc + 1));}
        }
    }


    long minCost(MAX);
    for(long rr = 0; rr < n; rr++){
        for(long cc = 0; cc < n; cc++){
            if(b[rr][cc] != '*'){continue;}
            for(long t = 0; t <= k; t++){minCost = (minCost < f[rr][cc][t]) ? minCost : f[rr][cc][t];}
        }
    }

    printf("%ld\n", (minCost < MAX) ? minCost : -1);

    return 0;
}
