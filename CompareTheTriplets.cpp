#include <cstdio>

int main(){

    int a1, a2, a3; scanf("%d %d %d\n", &a1, &a2, &a3);
    int b1, b2, b3; scanf("%d %d %d\n", &b1, &b2, &b3);

    int alice = (a1 > b1) + (a2 > b2) + (a3 > b3);
    int bob = (a1 < b1) + (a2 < b2) + (a3 < b3);

    printf("%d %d\n", alice, bob);

    return 0;
}
