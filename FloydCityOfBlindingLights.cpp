#include <cstdio>
#include <vector>
#include <map>

std::vector<std::vector<long> > floydWarshall(std::vector<std::vector<long> > edges){

    long n = edges.size();
    std::vector<std::vector<long> > dist(n, std::vector<long>(n, -1));
    for(long p = 0; p < n; p++){dist[p][p] = 0;}
    for(long x = 0; x < n; x++){
        for(long y = 0; y < n; y++){
            if(edges[x][y] == 0){continue;}
            dist[x][y] = edges[x][y];
        }
    }



    for(long k = 0; k < n; k++){
        for(long x = 0; x < n; x++){
            for(long y = 0; y < n; y++){
                if(dist[x][k] < 0 || dist[k][y] < 0){continue;}
                long cand = dist[x][k] + dist[k][y];
                if((dist[x][y] < 0) || (dist[x][y] > cand)){dist[x][y] = cand;}
            }
        }
    }

    return dist;
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);

    std::vector<std::vector<long> > edges(n + 1, std::vector<long>(n + 1, 0));
    for(long p = 0; p < m; p++){
        long x, y, r; scanf("%ld %ld %ld", &x, &y, &r);
        edges[x][y] = r;
    };

    std::vector<std::vector<long> > dist = floydWarshall(edges);

    long q; scanf("%ld", &q);
    while(q--){
        long u, v; scanf("%ld %ld", &u, &v);
        printf("%ld\n", dist[u][v]);
    }
    
    return 0;
}
