#include <cstdio>

int main(){

    int da, ma, ya; scanf("%d %d %d\n", &da, &ma, &ya);
    int de, me, ye; scanf("%d %d %d\n", &de, &me, &ye);

    if((ya < ye) || (ya == ye && ma < me) || (ya == ye && ma == me && da <= de)){puts("0");}
    else if(ya > ye){puts("10000");}
    else if(ya == ye && ma > me){printf("%d\n", 500 * (ma - me));}
    else if(ya == ye && ma == me && da > de){printf("%d\n", 15 * (da - de));}

    return 0;
}
