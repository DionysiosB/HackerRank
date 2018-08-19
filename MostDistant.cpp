#include <cstdio>
#include <cmath>

int main() {
    
    long n; scanf("%ld", &n);
    double minx(2e9), maxx(-2e9), miny(2e9), maxy(-2e9);
    while(n--){
        double x, y; scanf("%lf %lf", &x, &y);
        if(x == 0){
            miny = (miny < y) ? miny : y;
            maxy = (maxy > y) ? maxy : y;
        }
        else if(y == 0){
            minx = (minx < x) ? minx : x;
            maxx = (maxx > x) ? maxx : x;
        }
    }
    
    double distX = (maxx - minx);
    double distY = (maxy - miny);
    double dist = (distX > distY) ? distX : distY;
    
    double maxAbsx = (std::abs(minx) > std::abs(maxx)) ? std::abs(minx) : std::abs(maxx);
    double maxAbsy = (std::abs(miny) > std::abs(maxy)) ? std::abs(miny) : std::abs(maxy);
    double diag = sqrt(maxAbsx * maxAbsx + maxAbsy * maxAbsy);
    dist = (dist > diag) ? dist : diag;
    
    printf("%.7lf\n", dist);
    
    return 0;
}
