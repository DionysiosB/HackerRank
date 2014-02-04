#include <cstdio>

int main(){

    const int UPPER = 100;
    int count[UPPER] = {0};

    long n(0); scanf("%ld", &n);

    int temp(0);
    for(int k = 0; k < n; k++){scanf("%d", &temp); ++count[temp];}
    for(int k = 0; k < UPPER; k++){printf("%d ", count[k]);}; puts("");

    return 0;
}
