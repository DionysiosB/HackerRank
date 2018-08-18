#include <cstdio>

int main(){
    
    int n; scanf("%d", &n);
    if(n % 2){puts("Weird");}
    else if(2 <= n && n <= 6){puts("Not Weird");}
    else if(6 <= n && n <= 20){puts("Weird");}
    else if(20 <= n){puts("Not Weird");}
    
    return 0;
}
