#include <cstdio>
#include <vector>
#include <cmath>

int main() {
    
    long n; scanf("%ld", &n);
    double sx(0), sy(0), sz(0), sxx(0), syy(0), szz(0), sxy(0), sxz(0), syz(0);
    for(long p = 0; p < n; p++){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        sx += x; sxx += x * x;
        sy += y; syy += y * y;
        sz += z; szz += z * z;
        sxy += x * y; sxz += x * z; syz += y * z;
    }
    
    double mx = 1.0 * sx / n;
    double my = 1.0 * sy / n;
    double mz = 1.0 * sz / n;
    
    double tx = sqrt(sxx / n - mx * mx);
    double ty = sqrt(syy / n - my * my);
    double tz = sqrt(szz / n - mz * mz);
    
    double rxy = (n * sxy - sx * sy) / sqrt((n * sxx - sx * sx) * (n * syy - sy * sy));
    double ryz = (n * syz - sy * sz) / sqrt((n * syy - sy * sy) * (n * szz - sz * sz));
    double rzx = (n * sxz - sz * sx) / sqrt((n * szz - sz * sz) * (n * sxx - sx * sx));
    
    printf("%.2lf\n%.2lf\n%.2lf\n", rxy, ryz, rzx);
    
    return 0;
}
