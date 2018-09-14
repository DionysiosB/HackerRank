#include <cstdio>

int main(){
    
    long MOD = 8;
    long seat; scanf("%ld", &seat);
    long u = seat % MOD;
    if(u == 1 || u == 4){puts("LB");}
    else if(u == 2 || u == 5){puts("MB");}
    else if(u == 3 || u == 6){puts("UB");}
    else if(u == 7){puts("SLB");}
    else if(u == 0){puts("SUB");}
    
    return 0;
}
