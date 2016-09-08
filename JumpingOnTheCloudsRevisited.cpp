#include<cstdio>
#include<vector>

int main(){

    const int E = 100;
    const int tce = 2;
    int energy(E);

    int n, k; scanf("%d %d\n", &n, &k);
    std::vector<int> tc(n, 0);
    for(int p = 0; p < n; p++){scanf("%d", &tc[p]);}
    int pos(0);
    do{
        pos += k; pos %= n;
        --energy;
        if(tc[pos]){energy -= tce;}
    }while(pos != 0);

    printf("%d\n", energy);

    return 0;
}
