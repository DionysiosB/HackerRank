#include <cstdio>
#include <cmath>

int main(){

    double L, s1, s2; scanf("%lf %lf %lf", &L, &s1, &s2);
    long q; scanf("%ld", &q);
    if(s1 > s2){double u = s1; s1 = s2; s2 = u;}
    while(q--){
        double area; scanf("%lf", &area);
        printf("%.5lf\n", sqrt(2) * (L - sqrt(area)) / (s2 - s1));
    }

    return 0;
}
