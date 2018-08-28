#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>

int main(){

    long n; scanf("%ld", &n);
    for(long a = 1; a < n; a++){
        for(long b = 1; b < n; b++){
            std::vector<std::vector<long> > m(n, std::vector<long>(n, -1));
            m[0][0] = 0;
            std::queue<std::pair<long, long> > q; q.push(std::make_pair(0, 0));
            while(!q.empty()){
                std::pair<long, long> pos = q.front(); q.pop();
                long x(pos.first), y(pos.second);
                if(x - a >= 0 && y - b >= 0 && (m[x - a][y - b] < 0 || m[x - a][y - b] > 1 + m[x][y])){m[x - a][y - b] = 1 + m[x][y]; q.push(std::make_pair(x - a, y - b));}
                if(x - a >= 0 && y + b <  n && (m[x - a][y + b] < 0 || m[x - a][y + b] > 1 + m[x][y])){m[x - a][y + b] = 1 + m[x][y]; q.push(std::make_pair(x - a, y + b));}
                if(x + a <  n && y - b >= 0 && (m[x + a][y - b] < 0 || m[x + a][y - b] > 1 + m[x][y])){m[x + a][y - b] = 1 + m[x][y]; q.push(std::make_pair(x + a, y - b));}
                if(x + a <  n && y + b <  n && (m[x + a][y + b] < 0 || m[x + a][y + b] > 1 + m[x][y])){m[x + a][y + b] = 1 + m[x][y]; q.push(std::make_pair(x + a, y + b));}

                if(x - b >= 0 && y - a >= 0 && (m[x - b][y - a] < 0 || m[x - b][y - a] > 1 + m[x][y])){m[x - b][y - a] = 1 + m[x][y]; q.push(std::make_pair(x - b, y - a));}
                if(x - b >= 0 && y + a <  n && (m[x - b][y + a] < 0 || m[x - b][y + a] > 1 + m[x][y])){m[x - b][y + a] = 1 + m[x][y]; q.push(std::make_pair(x - b, y + a));}
                if(x + b <  n && y - a >= 0 && (m[x + b][y - a] < 0 || m[x + b][y - a] > 1 + m[x][y])){m[x + b][y - a] = 1 + m[x][y]; q.push(std::make_pair(x + b, y - a));}
                if(x + b <  n && y + a <  n && (m[x + b][y + a] < 0 || m[x + b][y + a] > 1 + m[x][y])){m[x + b][y + a] = 1 + m[x][y]; q.push(std::make_pair(x + b, y + a));}
            }

            printf("%ld ", m[n - 1][n - 1]);
        }
        puts("");
    }

    return 0;
}
