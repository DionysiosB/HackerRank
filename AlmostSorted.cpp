#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    std::vector<long> pos;
    for(long p = 1; p < n; p++){if(a[p - 1] > a[p]){pos.push_back(p);}}
    
    if(pos.size() == 0){puts("yes");}
    else if(pos.size() <= 2){
        long x(pos[0] - 1), y(pos.back());
        if((x == 0 || a[x - 1] <= a[y]) && (a[y] <= a[x + 1]) && (a[y - 1] <= a[x]) && (y + 1 == n || a[x] <= a[y + 1])){
            printf("yes\nswap %ld %ld\n", x + 1, y + 1);
        }
        else{puts("no");}
    }
    else{
        bool possible(true);
        for(long p = 1; p < pos.size(); p++){if(pos[p] != pos[p - 1] + 1){possible = false; break;}}
        long x(pos[0] - 1), y(pos.back());
        if(possible && (x == 0 || a[x - 1] <= a[y]) && (a[y] <= a[x + 1]) && (a[y - 1] <= a[x]) && (y + 1 == n || a[x] <= a[y + 1])){
            printf("yes\nreverse %ld %ld\n", x + 1, y + 1);
        }
        else{puts("no");}
    }

    return 0;
}
