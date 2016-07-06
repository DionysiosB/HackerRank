#include <cstdio>

int main(){

    long x1, u1, x2, u2; scanf("%ld %ld %ld %ld\n", &x1, &u1, &x2, &u2);

    bool possible(0);
    if(u1 == u2){possible = (x1 == x2);}
    else{
        long t = (x2 - x1) / (u1 - u2);
        possible = (t >= 0) && (x1 + u1 * t == x2 + u2 * t);
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
