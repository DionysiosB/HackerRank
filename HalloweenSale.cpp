#include <cstdio>

int main(){

    long p, d, m, s; scanf("%ld %ld %ld %ld", &p, &d, &m, &s);

    long cnt(0), price(p);
    while(s > 0){
        if(s >= price){++cnt; s -= price;} else{break;}
        price -= d;
        price = (price > m) ? price : m;
    }

    printf("%ld\n", cnt);

    return 0;
}
