#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

std::vector<long> dfs(std::map<long, std::vector<long> > tree, long root){

    std::vector<long> ans;
    for(int p = 0; p < tree[root].size(); p++){
        std::vector<long> subVector = dfs(tree, tree[root][p]);
        ans.insert(ans.end(), subVector.begin(), subVector.end());
        ans.push_back(tree[root][p]);
    }

    ans.push_back(root);
    return ans;
}

int main(){

    long numCases; scanf("%ld\n", &numCases);
    while(numCases--){

        long n, m; 
        scanf("%ld %ld\n", &n, &m);

        std::map<long, std::vector<long> > order;
        for(long p = 0; p < n; p++){std::vector<long> emptyVec; order[p] = emptyVec;}

        for(long p = 0; p < m; p++){
            long before, after; scanf("%ld %ld\n", &before, &after);
            order[after].push_back(before);
        }

        /*
        for(long p = 0; p < n; p++){
            printf("%ld ----> ", p); 
            for(long q = 0; q < order[p].size(); q++){
                printf("%ld ", order[p][q]);}; 
            puts("");
        }
        */

        for(long p = 0; p < n; p++){sort(order[p].begin(), order[p].end());}

        std::vector<bool> completed(n, 0);
        std::vector<long> output;
        for(long p = 0; p < n; p++){
            if(completed[p]){
                //printf("IGNORING node %ld, as it is already completed\n", p); 
                continue;
            }
            std::vector<long> partial = dfs(order, p);

            /*
            printf("PARTIAL VECTOR FOR NODE: %ld =  ", p); 
            for(long p = 0; p < partial.size(); p++){
                printf("%ld ", partial[p]);
            }
            puts("");
            */

            for(long p = 0; p < partial.size(); p++){
                if(completed[partial[p]]){continue;}
                else{
                    completed[partial[p]] = true;
                    output.push_back(partial[p]);
                }
            }
        }


        for(long p = 0; p < output.size(); p++){printf("%ld ", output[p]);}
        puts("");
    }


    return 0;
}
