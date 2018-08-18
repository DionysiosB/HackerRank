#include <cstdio>

int main(){

    double x, y; scanf("%lf %lf", &x, &y);
    double ca = 160 + 40 * x * (x + 1);
    double cb = 128 + 40 * y * (y + 1);
    printf("%.3lf\n%.3lf\n", ca, cb);

    return 0;
}
