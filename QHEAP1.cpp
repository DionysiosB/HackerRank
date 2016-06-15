#include <cstdio>
#include <set>

int main(){

    long q; scanf("%ld\n", &q);
    std::set<long> s;
    while(q--){
        int t; scanf("%d", &t);
        if(t == 1){long x; scanf("%ld", &x); s.insert(x);}
        else if(t == 2){long x; scanf("%ld", &x); s.erase(x);}
        else if(t == 3){printf("%ld\n", *s.begin());}
    }

    return 0;
}
