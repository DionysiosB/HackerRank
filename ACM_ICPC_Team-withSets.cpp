#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    int N, M; scanf("%d %d\n", &N, &M);
    std::vector<std::set<int> > versed(N);

    for(int p = 0; p < N; p++){
        std::string s; getline(std::cin, s);
        for(int r = 0; r < s.size(); r++){if(s[r] == '1'){versed[p].insert(r);}}
    }

    int maxTopics(0), maxTeams(0);
    for(int a = 0; a < N; a++){
        for(int b = a + 1; b < N; b++){
            std::set<int> test; 
            test.insert(versed[a].begin(), versed[a].end());
            test.insert(versed[b].begin(), versed[b].end());
            if(test.size() > maxTopics){maxTopics = test.size(); maxTeams = 1;}
            else if(test.size() == maxTopics){++maxTeams;}
        }
    }

    std::cout << maxTopics << std::endl << maxTeams << std::endl;

    return 0;
}
