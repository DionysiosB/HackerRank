#include <cstdio>
#include <vector>

int main(){

    int n, k; scanf("%d %d\n", &n, &k);
    std::vector<int> t(n + 1, 0);
    for(int p = 1; p <= n; p++){scanf("%d", &t[p]);}

    int chapter(0), page(1), probs(0), start(0), finish(0), total(0);
    bool change(true);
    while(true){
        if(change){
            ++chapter; if(chapter > n){break;}
            probs = t[chapter]; finish = 0; change = false;
        }
        start = ++finish; finish += k - 1; 
        if(finish >= probs){finish = probs; change = true;}
        if(start <= page && page <= finish){++total;}
        ++page;
    }

    printf("%d\n", total);

    return 0;
}
