#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int N, M; scanf("%d %d\n", &N, &M);
    std::vector<std::vector<bool> > versed(N, std::vector<bool>(M, 0));

    for(int row = 0; row < N; row++){
        std::string s; getline(std::cin, s);
        for(int col = 0; col < s.size(); col++){
            if(s[col] == '1'){versed[row][col] = 1;}
        }
    }

    int maxTopics(0), maxTeams(0);
    for(int a = 0; a < N; a++){
        for(int b = a + 1; b < N; b++){
            long test(0); for(int p = 0; p < M; p++){if(versed[a][p] || versed[b][p]){++test;}}
            if(test > maxTopics){maxTopics = test; maxTeams = 1;}
            else if(test == maxTopics){++maxTeams;}
        }
    }

    std::cout << maxTopics << std::endl << maxTeams << std::endl;

    return 0;
}
