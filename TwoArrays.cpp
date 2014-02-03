#include<cstdio>
#include<vector>
#include<algorithm>

int main(){
    
    int T(0); scanf("%d", &T);

    while(T--){
        long N(0), K(0); scanf("%ld %ld", &N, &K);
        std::vector<long> first(N,0); for(int t = 0; t < N; t++){scanf("%ld", &first[t]);}
        std::vector<long> second(N,0); for(int t = 0; t < N; t++){scanf("%ld", &second[t]);}

        std::sort(first.begin(), first.end());
        std::sort(second.begin(), second.end());

        bool possible(1);
        for(int t = 0; t < N; t++){if(first[t] + second[N - 1 - t] < K){possible = 0; break;}}
        if(possible){puts("YES");} else puts("NO");

    }
    return 0;
}
